#include <stdio.h> 
#include <stdlib.h>

int main(){

	int t; // test case 횟수
	char *p;	// 문자 배열(길이 1000)을 저장하기 위한 배열(길이 t)의 포인터
	char tempStart, tempLast;
	int charIndex;

	scanf("%d", &t);

	p = (char*)malloc(sizeof(char) * t * 1000);

	for (int i=0; i<t; i++) {
		scanf("%s", p+(i*1000));
	}
	

	for (int i=0; i<t; i++) {
		charIndex = 0;
		tempStart = *( p + (i*1000) );

		while ( *(p + (i*1000) + charIndex) != '\0' ) {
			charIndex++;
		}

		tempLast = *(p + (i*1000) + charIndex-1);
		printf("%c%c\n", tempStart, tempLast);
	}

	return 0;
}