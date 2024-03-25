#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a, b, temp;
	int result = 0;
	scanf("%d\n%d", &a, &b);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", temp = a * (b%10));
		result += temp * pow(10, i);
		b /= 10;
	}
	printf("%d", result);

	return 0;
}