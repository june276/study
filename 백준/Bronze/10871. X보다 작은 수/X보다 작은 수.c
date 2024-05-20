#include <stdio.h> 

int main(){

	int n, x;
	scanf("%d %d", &n, &x);
	int temp = 0;
	int cnt = 0;
	for(int i=0; i<n; i++){
		scanf("%d", &temp);
		temp < x && printf("%d ", temp);;
	}

	return 0;
}