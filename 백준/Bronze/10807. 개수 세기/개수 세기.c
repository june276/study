#include <stdio.h> 

int main(){

	int n, v;
	int count = 0;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	for(int i=0; i<n; i++){
		arr[i] == v && count++;
	}
	printf("%d", count);
	return 0;
}