#include <stdio.h>

int main(int argc, int argv[]) 
{
    int str[7];   
    int i, j, temp;

  for (i = 0; i < argc; i++) {
    for (j = argc; j > i; j--) {
      if (argv[j-1] > argv[j]) {
        temp = argv[j-1];
        argv[j-1] = argv[j];
        argv[j] = temp;
      
    }
  }
}
    return 0;
}
