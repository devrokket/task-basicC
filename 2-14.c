//기컴프 1차 과제
//프로그래밍 연습 2-14
//중심이 (0,0)인 원의 원주상에 좌표가 (4,5)인 한 점이 위치한다. 원주의 길이와 면적을 계산하는 프로그램을 작성하시오.

# include <stdio.h>
# include <math.h>


int main()
{
    int center_x = 0;
    int center_y = 0;
    int x_i = 4;
    int y_i = 5;
    double radius;
    radius = sqrt(pow(x_i - center_x, 2) + pow(y_i - center_y, 2));
    double circum = 2 * M_PI * radius;
    double area = radius * radius * M_PI;
    printf("원주의 길이는 %lf, 원의 면적은 %lf", circum, area);
}
