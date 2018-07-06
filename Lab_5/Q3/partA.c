//
//  Lab5_Q3_partA.c
//  
//
//  Created by Ibrahim Ijaz on 4/6/18.
//

#include <stdio.h>
#include <unistd.h>
#include <systypes.h>

void main(){
    int cpid = -1;
    cpid=fork();
    if(cpid==-1)
    {
        printf("Fork failed \n");
    }
    if(cpid==0)
    {
        printf("Child \n");
        printf("Child pid: %d\n" ,getpid());
        printf("Child ppid: %d\n" ,getppid());
    }
    else{
        wait();
        printf("Parent \n");
        printf("Parent pid: %d\n" ,getpid());
        printf("Parent ppid: %d\n" ,getppid());
    }
    return 0;
}
