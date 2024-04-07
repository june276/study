	#include <stdio.h> 

	int main(){

		int n, temp;

		char star = '*';
		char space = ' ';

		scanf("%d", &n);
		for (int i = 1; i <= (n*2)-1; i++)
		{
			temp = i<=n ? i : (n*2)-i;
			for (int j = 0; j < temp; j++)
			{
				printf("%c", star);
			}
			for (int j = 0; j < (n*2)-(temp*2); j++)
			{
				printf("%c", space);
			}
			for (int j = 0; j < temp; j++)
			{
				printf("%c", star);
			}
			printf("\n");
		}

		return 0;
	}