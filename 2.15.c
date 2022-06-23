//기컴프 1차 과제
//프로그래밍 연습 2-15
//원의 원주 상에 놓여있는 점 (2,2)과 (5,6)을 잇는 직선이 그 원의 지름이다. 이 원의 면적을 게산하는 프로그램을 작성하시오.

# include <stdio.h>
# include <math.h>

int main()
{
    int x_i = 2;
    int y_i = 2;
    int x_j = 5;
    int y_j = 6;
    double diameter = sqrt(pow(x_j - x_i, 2) + pow(y_j - y_i, 2));
    double radius = diameter/2;
    double area = radius * radius * M_PI;
    printf("원의 면적은 %lf 입니다", area);
}
