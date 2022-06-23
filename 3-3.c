//기컴프 1차 과제
//프로그래밍 연습 3-3
//주어진 수의 집합에서 음수와 양수의 개수를 계산하고 출력하는 프로그램을 작성하시오. 
//숫자를 읽을 때 scanf 문을 사용하고, 0이 읽혀질 때까지 읽기를 중지 시킨다.

# include <stdio.h>

int main()
{
    int a;
    int positive;
    int negative;
    positive = 0;
    negative = 0;
    scanf("%d", &a);
    while(a != 0)
    {
        a > 0 ? ++positive : ++negative;
        scanf("%d", &a);
    }
    printf("양수의 개수는 %d이고, 음수의 개수는 %d입니다.\n", positive, negative);  
    return 0;
}
