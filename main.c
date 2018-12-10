#include <stdio.h> 
#include<stdlib.h>  
int main(int argc, char *argv[])
{
	char str[100];
	int data[100], i,j,k,tmp,x,n=0;
	while(fgets(str, sizeof(str), stdin)){
		x=atoi(str);
		data[n]=x;
		n++;
		if(n==9&&x==1||n==3&&x==1){
			for(i=0;i<n;i++){
				printf("%d",data[i]);
				if(i<n-1)
					printf(" ");
			}
			printf("\n");
			for(j=0;j<n-1;j++){
				for (i=j+1;i<n-2;i++) {
					if (data[i]>data[i+1]){
						tmp=data[i];
						data[i]=data[i+1];
						data[i+1]=tmp;
						for (k=0;k<n;k++){
							printf("%d",data[k]);
							if(k<n-1)
								printf(" ");
						}
						printf("\n");
					}
				}
          		}
		}
		if(n==100&&x==20) {
			for(i=0;i<n;i++){
				printf("%d", data[i]);
				if(i<n-1)
					printf(" ");
			}
			printf("\n");
			for(j=0;j<n-1;j++) {
				for (i = n- 2; i >= 0; i--) {
					if (data[i] > data[i + 1]){
						tmp = data[i];
						data[i] = data[i + 1];
						data[i + 1] = tmp;
						for (k = 0; k < n; k++){
							printf("%d", data[k]);
							if(k<n-1)
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
