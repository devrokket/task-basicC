//기컴프 1차 과제
//프로그래밍 연습 5-7
//아래의 명세에 따라 지수 형식으로 10.45678 을 출력하는 프로그램을 작성하시오.
//(a) 소수점 둘 째 자리까지

# include <stdio.h>
# include <math.h>

int main()
{
    double number_1;
    number_1 = 10.45678;
    printf("%10.2e", number_1);
}