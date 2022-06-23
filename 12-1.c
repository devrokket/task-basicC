/* 
프로그래밍 연습 12.1
포인터를 사용하여 정수 배열을 읽고 이를 역방향으로 출력하는 프로그램을 작성하라.
*/
#include <stdio.h>

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *p = arr;
	int num = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
				num = *(p + 1 + j);
				*(p + 1 + j) = *(p + j);
				*(p + j) = num;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d \n", p[i]);
	}

	return 0;
}