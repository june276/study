#include <stdio.h>
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	int value, prevValue;
	int quotient=0, remainder=0;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &value);
		quotient = k / value;
		remainder = k % value;
		if (remainder != 0)
		{
			result += remainder/prevValue;
			k -= remainder;
		}
		prevValue = value;
	}

	printf("%d", result + quotient);
	
	return 0;
}