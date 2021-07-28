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
    int len;	
	
    int shm_fd = shm_open("/MyMemoryMap",O_CREAT | O_RDWR, 0777);

    if (shm_fd == -1) {
	   perror("shm_open");
	   return 1;
    }

    if (ftruncate((shm_fd, SHARED_MEMORY_OBJECT_SIZE+1) == -1) {
	   perror("ftruncate");
	   return false;
    }

    void *memory = mmap(NULL, 1000, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    if (memory == NULL) {
        perror("mmap");
        return false;
    }
    
    return memory; 
    return 0;
}
