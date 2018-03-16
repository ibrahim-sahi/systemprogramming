#include <stdio.h>

int isEqual(int x,int y){
    if (x==y){
    return 1;
    }
    else{
    return -1;
    }
} 

int swap (int *a, int *b){
    *b=*a+*b;
    *a=*b-*a;
    *b=*b-*a;

    
    return 0;
}