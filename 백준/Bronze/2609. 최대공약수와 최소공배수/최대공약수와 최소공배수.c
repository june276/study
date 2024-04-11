#include <stdio.h> 

int funcMax(int a, int b){
	if (b==0)
	{
		return a;
	}
	else
	{
		return funcMax(b, a%b);
	}
}

int funcMin(int a, int b, int c){
	return a * b / c;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	int max = funcMax(a, b);
	int min = funcMin(a, b, max);

	printf("%d\n%d", max, min);

	return 0;
}