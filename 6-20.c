//기컴프 1차 과제
//프로그래밍 연습 6-20
//문자열을 입력 받고 대문자와 소문자의 수를 세는 C프로그램을 작성하라.

# include <stdio.h>
# include <ctype.h>

int main(void)
{
    int upper = 0;
    int lower = 0;
    char alphabet[100];
    printf("Enter an alphabet\n");
    scanf("%s", alphabet);
    for(int i = 0; i < sizeof(alphabet); ++i)
    {
        if(alphabet[i] == '\0') {
            break;
        }
        if (isupper(alphabet[i]))
        {
            ++upper;
        }
        else
        {
            ++lower;
        }
    }
printf("대문자의 개수는 %d개이며, 소문자의 개수는 %d개다.\n", upper, lower); 
}