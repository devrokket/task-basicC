//기컴프 1차 과제
//프로그래밍 연습 6-14
//양의 정수 하나를 입력 받으면, 그 입력된 숫자가 소수(prime number)인지 판별 해주는 프로그램을 작성하시오. 또한 작성된 프로그램을 수정해 100부터 200 사이의 모든 소수의 개수를 찾아주는 프로그램을 작성하시오.
//(참고: 소수란 1과 자기 자신으로만 나누어지는 양의 정수)

# include <stdio.h>
# include <math.h>

int prime_ox(int integer) 
{
    for (int i = 2; i < integer; i++)
        {
            if (integer % i == 0)
            {
                printf("%d는 소수가 아닙니다.\n", integer);
                return 0;
            }
        }
        return 1;
}

int main()
{
    int integer;
    printf("양의 정수 하나를 입력하시오.\n");
    scanf("%d", &integer);
    if(prime_ox(integer) == 1) {
        printf("%d는 소수입니다.", integer);
    }

    //100 ~ 200
    int count = 0;
    for (int j = 100; j <= 200; j++)
    {
        if(prime_ox(j) == 1)
        {
            ++count;
        }
    }
    printf("100부터 200사이의 소수의 개수는 %d개 입니다\n", count);
}