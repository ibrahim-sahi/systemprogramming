//
//  Lab9_task1.c
//  
//
//  Created by Ibrahim Ijaz on 5/11/18.
//

#include <stdio.h>
#include<fcntl.h>
int main()
{
    char buff[1024];
    int fd1 = open("/etc/passwd", 0_RDONLY);
    int fd2 = dup(fd1);
    int n;
    for (;;){
        n = read (fd2 , buff , 1023);
        if(n <= 0){
            close(fd1);
            close(fd2);
            return 0;
        }
        write(1 , buff , n);
    }
    return 0;
}
