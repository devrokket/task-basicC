/* 프로그래밍 연습 9.15
다음처럼 주어지는 문자열에 대하여
char str[ ] = “123456789”;
아래와 같은 출력이 나오는 프로그램을 작성하라.
1
2 32
3 45 4 3
4 567 6 5 4 56 7 8 9 8 7 6 5*/

#include <stdio.h>

int main()
{
    int line = 0;
    int num = 0, i = 0, space = 0;
    printf("정수:");
    scanf("%d", &line);

    for (i = 1; i <= line; i++) //입력한 line번 반복
    {
        //i번 라인에 공백은 (line-i)개 출력
        for (space = 0; space < (line - i); space++)
        {
            putchar(' ');
        }
        //1부터 i까지 증가하면서 출력
        for (num = 1; num <= i; num++)
        {
            printf("%d", num);
        }
        //i-1번부터 1까지 감소하면서 출력
        for (num = i-1; num > 0; num--)
        {
            printf("%d", num);
        }
        putchar('\n');//개행 출력
    }

    return 0;
}