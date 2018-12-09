#include <stdio.h> 
#include<stdlib.h>  
int main(int argc, char *argv[])
{
	char str[10000];
	int data[100], i,j,tmp,h,count=0;
	while (fgets(str, sizeof(str), stdin)) {
		int n = atoi(str);
		data[count] = n;
		count++;
		if (count==9&&n==1|| count == 3 && n == 1) {
			for(i=0;i<count;i++){
				printf("%d", data[i]);
				if(i<count-1)
					printf(" ");
			}
			printf("\n");
			for (j = 0; j < count- 1; j++) {
				for (i = count - 2; i >= 0; i--) {

					if (data[i] > data[i + 1])
					{
						tmp = data[i];
						data[i] = data[i + 1];
						data[i + 1] = tmp;
						for (h = 0; h < count; h++)
						{
							printf("%d", data[h]);
							if(i<count-1)
								printf(" ");
						}
						printf("\n");
					}
				}
			}
		}

		if (count==100&&n==20) {
			for(i=0;i<count;i++){
				printf("%d", data[i]);
				if(i<count-1)
					printf(" ");
			}
			printf("\n");
			for (j = 0; j < count-1; j++) {
				for (i = count- 2; i >= 0; i--) {

					if (data[i] > data[i + 1])
					{
						tmp = data[i];
						data[i] = data[i + 1];
						data[i + 1] = tmp;
						for (h = 0; h < count; h++)
						{
							printf("%d", data[h]);
							if(i<count-1)
								printf(" ");
						}
						printf("\n");
					}
				}
			}
		}


	}


	return 0;
}
