#include <stdio.h> 

int main(){

	int n,m;
	scanf("%d %d", &n, &m);
	int arr[n];
	int temp, i ,j;
	for(int x=0; x<n; x++){
		arr[x] = x+1;
	}
	for(int x=0; x<m; x++){
		scanf("%d %d", &i, &j);
		temp = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j-1] = temp;
	}
	for(int x=0; x<n; x++){
		printf("%d ", arr[x]);
	}
	return 0;
}