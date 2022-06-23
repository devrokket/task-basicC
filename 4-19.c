//기컴프 1차 과제
//프로그래밍 연습 4-19
//입력된 데이터가 일, 달, 년 값이 유효한지를 판단하는 C 프로그램을 작성하시오.


# include <stdio.h>

int main()
{
    int year;
    int month;
    int day;

    printf("please enter year\n");
    scanf("%d", &year);
    
    printf("please enter month\n");
    scanf("%d", &month);

    printf("please enter day\n");
    scanf("%d", &day); /*input y, m, d */

    if (year > 0 && month > 0 && day > 0)
    {
        if (month <= 12)
        {
            if (day <= 31)
            {
                printf("year, month, day are valid.\n");
            }
            else
                printf("Error\n");
        }
        else
            printf("Error\n");
    }
    else
        printf("Error!\n");
}