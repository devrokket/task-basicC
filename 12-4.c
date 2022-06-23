/*
프로그래밍 연습 12.4 두개의 행렬을 포인터를 사용한 인자로 받고,
이 행렬을 곱한 결과를 또한 포인터를 사용하여 반환하는 프로그램을 작성하라.
*/

#include <stdio.h>
#define l 3
#define m 3
#define n 3

int main(void) {
	/* x[a][b] has a rows, b columns */
	int A[l][m] = { { 1,3,2 }, { 7,6,3 }, { 3,0,3 } };
	int B[m][n] = { { 2,1,2 }, { 7,8,1 }, { 5,5,1 } };
	int C[l][n]; // C = A ⅹ B
	int i, j, k;
	for(i = 0; i < l; i++)
		for(j = 0; j < n; j++){
			C[i][j] = 0;
			for(k = 0; k < m; k++)
				C[i][j] += A[i][k] * B[k][j];
		}
	for(i = 0; i < 3; i++){
		for(j = 0; j < n; j++)
			printf("%d\t", C[i][j]);
		printf("\n");
	}
	return 0;
}