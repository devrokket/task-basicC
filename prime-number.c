# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int sum = 0;
    int k = 0;

    for(int i =2;i <= 200; i++)
    {
        for(k =2; k < i; k++)
        {
            if(i%k ==0)
            {
                break; 
            }   
        }
        if (k == i)
        {
            sum += k;
        }
        
    }
printf("1부터 200까지의 소수의 합 = %d\n", sum);
}