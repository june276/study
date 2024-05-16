#include <stdio.h> 

int main(){

	int n;
	int grid[101][101] = {{0}};
	int result = 0;
	scanf("%d", &n);
	int x, y;
	for (int i=0; i<n; i++){
		scanf("%d %d", &x, &y);
		for(int gridX = x; gridX < x+10; gridX++){
			for(int gridY=y; gridY< y+10; gridY++){
				grid[gridX][gridY] = 1;
			}
		}
	}
	for(int i=0; i<101; i++){
		for(int j=0; j<101; j++){
			grid[i][j] && result++;
		}
	}
	printf("%d", result);

	return 0;
}