#include <stdio.h> 

int main(){

	int n, k;
	int cnt = 0;
	scanf("%d %d", &n, &k);

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
	

	for (int i = 0; i < n; i++){
		if (n%(i+1) == 0){
			arr[i] = 1;
			cnt++;
		}
	}
	if (cnt<k){
		printf("%d", 0);
	}else{
		cnt = 0;
		for (int i=0; i<n; i++){
			(arr[i] == 1) && cnt++;
			if (cnt==k){
				printf("%d", i+1);
				break;
			}
		}
	}
	return 0;
}