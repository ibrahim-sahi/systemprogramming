//
//  Lab5_Q1_SetIDS.c
//  
//
//  Created by Ibrahim Ijaz on 4/6/18.
//

#include <stdio.h>
#include<unistd.h>

int main(){
    uid_t ruid, euid, suid;
    gid_t rgid, egid, sgid;
    
    getresuid(&ruid, &euid, &suid);
    printf("My Real user-ID is: %d\n", (int)ruid);
    printf("My Effective user-ID is: %d\n", (int)euid);
    printf("My Saved Set-user-ID is: %d\n", (int)suid);
    
    getresgid(&rgid, &egid, &sgid);
    printf("My Real group-ID is: %d\n", (int)rgid);
    printf("My Effective group-ID is: %d\n", (int)egid);
    printf("My Saved Set-group-ID is: %d\n", (int)sgid);
    return 0;
}
