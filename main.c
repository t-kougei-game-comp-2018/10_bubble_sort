#include <stdio.h>

int main(int argc, int *argv[]) 
{
    int str[7];
    
   int i;

  for (i = 0; i <= 100; i++) {
   
      if (str[i] > str[i+1]) {
       str[i]=str[i+1];
          printf("\n");
      }
}
    return 0;
}
