#include <stdio.h> 

int main(){

	int n;
	scanf("%d", &n);
	int arr[n];
	int temp, max;
	float newSum = 0;
	for (int i=0; i<n; i++){
		scanf("%d", &temp);
		arr[i] = temp;
	}
	max = arr[0];
	for(int i=1; i<n; i++){
		max = (arr[i]>max) ? arr[i] : max;
	}
	for(int i=0; i<n; i++){
		newSum += ((float) arr[i] / max )* 100;
	}
	printf("%f", newSum / n);
	return 0;
}