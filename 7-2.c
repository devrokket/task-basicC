/*
프로그래밍 연습 7.2
어떤 정수가 주어졌을 때 그 수를 이루는 각 자리 수의 합을 구하는 프로그램을
작성하시오.
*/

# include <stdio.h>
int main()
{
    int sum = 0;
    int number;
    printf("정수를 입력하세요:\n");
    scanf("%d", &number);
    while(number)
    {
        sum = sum + number%10;
        number = number/10;
    }
    printf("각 자릿수의 합은 %d입니다.\n", sum);
    return 0;
}


