#include <iostream>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
//#include <cstdio>
  
int main(int argc, char *argv[])
{
    void *memory;
	//int len;	
    std::cout << "Usege: <write> [text]" << std::endl;

    int shm_fd = shm_open("my_shared_memory",O_CREAT | O_RDWR, 0777);

    if (shm_fd == -1) {
	   perror("shm_open");
	   return 1;
    }

    if (ftruncate(shm_fd, 100) == -1) {
	   perror("ftruncate");
	   return 1;
    }

    memory = mmap(NULL, 100, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (memory == MAP_FAILED) {
        perror("mmap");
        return 1;
    }
    
//    return memory;
    return 0;
}
