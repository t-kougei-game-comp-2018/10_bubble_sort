#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int *data, int count)
{
	for (int k = 0; k < count; k++)
	{
		if (k == 0)
		{
			printf("%d", data[k]);
		}
		else
		{
			printf(" %d", data[k]);
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	char str[4];
	int tmp[100];
	int count = 0;

	while (fgets(str, sizeof(str), stdin)) {
		int number = atoi(str);

		tmp[count++] = number;
	}

	int *data = (int *)malloc(sizeof(int) * count);
	memcpy(data, tmp, sizeof(int) * count);

	print(data, count);

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = count - 1; j > i; j--)
		{
			if (data[j - 1] > data[j])
			{
				int tm = data[j - 1];
				data[j - 1] = data[j];
				data[j] = tm;

				print(data, count);
			}
		}
	}

	free(data);
	return 0;
}
