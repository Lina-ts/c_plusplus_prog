#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#elif __linux
#include <string.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#endif

using namespace std;

#ifdef _WIN32
struct MyData
{
    string name;
    int age;
    MyData(string _name, int _age) : name(_name), age(_age)
    {}
};

void readMemory()
{
    char *shared_file_name = "my_shared_memory";

    // open shared memory file
    HANDLE shared_file_handler = OpenFileMapping(
        FILE_MAP_ALL_ACCESS,
        NULL,
        shared_file_name);

    if (shared_file_handler)
    {
        LPVOID lp_base = MapViewOfFile(
            shared_file_handler,
            FILE_MAP_ALL_ACCESS,
            0,
            0,
            0);

        // copy shared data from memory
        cout << "read shared data: " << endl;
        const unsigned long buff_size = 4096;
        //char share_buffer[buff_size] = { 0 };
        //strcpy(share_buffer, (char *)lp_base);
        char *share_buffer = (char *)lp_base;

        cout << share_buffer << endl;

        /*MyData *my_data = (MyData *)lp_base;
        cout << my_data->name << " " << my_data->age << endl;*/

        // close share memory file
        UnmapViewOfFile(lp_base);
        CloseHandle(shared_file_handler);
    }
    else
        cout << "open mapping file error" << endl;
}
#elif __linux
struct MyData
{
    char name[20];
    int age;
};

void readMemory()
{
    // specify shared file path
    char *shared_file_name = "/home/akurbanova/codetest/my_shared_memory";

    // open mmap file
    int fd = open(shared_file_name, O_RDONLY, 00777);
    if (fd < 0)
        cout << "open file error" << endl;

    const unsigned long buff_size = 4096;
    //    size_t read_size = buff_size;
    size_t read_size = sizeof(MyData);

    // map file to memory
    void *p = mmap(NULL, read_size, PROT_READ, MAP_SHARED, fd, 0);

    cout << "read shared data: " << endl;

    //    char *share_buffer = (char *)p;
    //    cout << share_buffer << endl;

    MyData *share_buffer = (MyData *)p;
    cout << share_buffer->name << " " << share_buffer->age << endl;

    // unmap and close
    munmap(p, read_size);
    close(fd);
}
#endif

int main()
{
    readMemory();

    getchar();

    return 0;
}
