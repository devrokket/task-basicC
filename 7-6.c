/* 프로그래밍 연습 7.6
100명 사람들의 나이를 입력 받은 뒤 50세부터 60세에 속하는 사람들의 수를 
구해주는 프로그램을 작성하시오. 단, for문과 continue 문을 사용하시오.
*/
#include <stdio.h>

int main()
{
    int age;
    int sum = 0;
    int i;
    for(i=1;i<=100;i+=1)
    {
        printf("%d번째 사람의 나이를 입력하세요\n", i);
        scanf("%d", &age);
        if(age>=50&&age<=60)
        {
            sum += 1;
        }
    }
    printf("50세와 60세 사이에 속하는 사람들의 수: %d\n", sum);
}