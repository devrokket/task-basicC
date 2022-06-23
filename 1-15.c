# include <stdio.h>

int main(void)
{
    int sum = 0;
    int number = 0;
    int k = 2;

    for (int i = 2; k <= 200; i++, k++)
    {
        if (k % i != 0)
        {
            if(k != i)
            {
                sum = sum + k;
            }
        }
    }
    printf("200까지의 소수의 합은 %d이다.\n", sum);
}