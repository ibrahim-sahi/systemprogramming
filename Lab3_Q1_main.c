#include "myMathFunc.h"
#include <stdio.h>
int main(){

int a, b;
printf("The program takes 2 integers and swaps them");
printf("-----");
printf ("Enter integer a: ");
scanf ("%d", &a);
printf ("Enter integer b: ");
scanf ("%d", &b);
int result = swap(&a,&b);
printf("A = %d and B = %d; ",a,b);
return result;


int x, y;
printf ("The program takes two numbers to see if they are equal or not");
printf ("Enter integer x: ");
scanf ("%f", &x);
printf ("Enter integer y: ");
scanf ("%f", &y);
float ans= isEqual(x,y);
        if (ans==1){
        printf("X & Y are equal", ans);
        return 0;
        }
        else{
        printf("X & Y are not equal", ans);
        return 0;
        }

       }  