#include <stdio.h> 

int main(){

	int arr[9];

	int index, temp;
	int max = 0;

	for(int i=0; i<9; i++){
		scanf("%d", &temp);
		if(temp > max){
			max = temp;
			index = i+1;
		}
	}
	printf("%d\n%d", max, index);
	
	return 0;
}