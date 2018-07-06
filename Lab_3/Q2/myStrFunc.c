#include <stdio.h>

int isPalindrome(char *arr, int size){

   int x=0;
   for(int i=0; i<size;i++){
   if(arr[i]==arr[size])
   {
   x=1;
   break;
   }
   size--;
   x=-1;
   }
   return x;

} 
