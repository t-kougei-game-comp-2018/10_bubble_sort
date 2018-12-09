#include <stdio.h>

int main(int argc, int argv[]) 
{
   
    int i, j, temp;

  for (i = 0; i < argc; i++) {
    for (j = argc; j > i; j--) {
      if (argv[j-1] > argv[j]) {
        temp = argv[j-1];
        argv[j-1] = argv[j];
        argv[j] = temp;
      
    }
  }
      printf("%d\n",argv[i]);
}
    return 0;
}
