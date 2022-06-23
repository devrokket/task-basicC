/*프로그래밍 연습 10.5
피보나치 수열은 다음과 같이 재귀적으로 표현된다.
𝐹1=1
𝐹2=1 
𝐹=𝐹 +𝐹 ,𝑛>2 𝑛 𝑛−1 𝑛−2
배열을이용하여첫n개의피보나치수를생성하는함수를작성하고, n=5,10, 15 일 때의 사용 예를 보여라. */
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define N 100
int main() {
    int n, i;
    printf("n개의 피보나치를 만들까요?: \n");
    scanf("%d", &n);
    int fib[N] = {0,1};
    
    // 피보나치 수열 생성

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	// 피보나치 출력

	printf("피보나치 수 : ");

	for (i = 0; i < n; i++)
	{
		printf("%d\n", fib[i]);

	}

	return 0;
}
