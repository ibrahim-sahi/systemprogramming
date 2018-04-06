//
//  Lab5_Q1_IDS.c
//  
//
//  Created by Ibrahim Ijaz on 4/6/18.
//

#include <stdio.h>
#include<unistd.h>


int main(){
    printf("My Real user-ID is: %d\n", (int)getuid());
    printf("My Effective user-ID is: %d\n", (int)geteuid());
    printf("My Real group-ID is: %d\n", (int)getgid());
    printf("My Effective group-ID is: %d\n", (int)getegid());
    return 0;
    
}
    /*  When a process starts execution the Effective UID and Effective GID are the same as the Real UID and Real GID respectively. When a process (with SUID bit set) is run, the EUID of the process is set to that of the owner of the file. This mechanism allows a user to assume the identity and thus the privileges of another user while running a particular program. Real ID never changes, only effective ID changes.  */
