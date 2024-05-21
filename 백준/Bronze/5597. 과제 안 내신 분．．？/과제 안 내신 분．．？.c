#include <stdio.h> 

int main(){

	int arr[30] = {0};
	int temp;
	for(int i=0; i<28; i++){
		scanf("%d", &temp);
		arr[temp-1] = 1;
	}
	for(int i=0; i<30; i++){
		arr[i] == 0 && printf("%d\n", i+1);
	}

	return 0;
}