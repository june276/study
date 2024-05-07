#include <stdio.h> 

int main(){
	int arr[9];
	int temp;
	for (int i=0; i<9; i++){
		scanf("%d", &temp);
		arr[i] = temp;
	}

	for (int index1=0; index1<9; index1++){
		for (int index2=index1+1; index2<9; index2++){
			temp = 0;
			for (int i=0; i<9; i++){
				if (i != index1 && i != index2){ temp += arr[i]; }
			}
			if (temp == 100){
				for(int i=0; i<9; i++){
					if (i != index1 && i != index2){ printf("%d\n", arr[i]); } 
				}
				return 0;
			}
		}
	}
	return 0;
}