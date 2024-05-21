#include <stdio.h> 

int main(){

	int n, m;
	scanf("%d %d", &n, &m);
	int arr[n];
	for (int x=0; x<n; x++){
		arr[x] = 0;
	}
	int i,j,k;
	for(int x=0; x<m; x++){
		scanf("%d %d %d", &i, &j, &k);
		for(int y=i-1; y<j; y++){
			arr[y] = k;
		}
	}
	for(int x=0; x<n; x++){
		printf("%d ", arr[x]);
	}

	return 0;
}