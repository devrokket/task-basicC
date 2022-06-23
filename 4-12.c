//기컴프 1차 과제
//프로그래밍 연습 4-12
//scanf문을 사용하여 세 개의 값을 읽고 다음 결과들을 출력하는 프로그램을 작성하시오. 
// (a) 세 개의 값

# include <stdio.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Enter the first nubmer\n");
    scanf("%f", &a);

    printf("Enter the second nubmer\n");
    scanf("%f", &b);

       
    printf("Enter the third nubmer\n");
    scanf("%f", &c);

    float sum = a + b + c;
    printf("세 값의 합은 %f이다.\n", sum);
}