#include <stdio.h> 

int main(){

	int arr[42] = {0};
	int temp;
	int cnt = 0;
	for(int i=0; i<10; i++){
		scanf("%d", &temp);
		arr[(temp-1)%42]++;
	}
	for(int i=0; i<42; i++){
		arr[i] != 0 && cnt++;
	}
	printf("%d", cnt);

	return 0;
}