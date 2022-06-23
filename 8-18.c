/*프로그래밍 연습 8.18
금액을 입력 받고 해당하는 최소 개수의 화폐로 바꾸는 C 프로그램을 작성하라.
화폐는 오만원권, 만원권, 오천원권, 천원권, 500원 동전, 100원 동전, 50원 동전, 10원 동전을 사용하도록 한다.
 10원 미만은 절사한다.*/
#include <stdio.h>
int main(void)
{
    int won;
    int money[8]={50000,10000,5000,1000,500,100,50,10};
    int a[8], b[8], i;
    printf("금액을 입력하세요");
    scanf("%d", &won);
    printf("화폐단위\n");
    a[0] = won/money[0];
    b[0] = won-money[0]*a[0];
    printf("%5d원권 :\t%d\n", money[0], a[0]);
    for(i=1;i<8;i++)
    {
    a[i] = b[i-1]/money[i];
    b[i] = b[i-1]-money[i]*a[i];
    printf("%5d원권 : \t%d\n", money[i], a[i]);
    }
    return 0;
}
