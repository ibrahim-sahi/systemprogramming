//
//  Lab9_task2.c
//  
//
//  Created by Ibrahim Ijaz on 5/11/18.
//

#include <stdio.h>
#include<fcntl.h>
int main()
{
    char buff[1024];
    int fd1 = open("/etc/passwd", O_RDONLY);
    int fd2 = dup(fd1);
    int fd3 = open("ErrorFile.txt", O_CREAT | O_WRONLY, 0433)
    char arr[] = "Error";
    
    if (fd2==-1)
    {
        write (fd3, arr, 6);
    }
    else{
        int n;
        for(;;)
        {
            n = read(fd2, buff, 1023);
            
            if (n<=0)
            {
                close(fd1);
                close(fd2);
                
                return 0;
            }
            write(fd3, buff, n);
        }
    }
}
