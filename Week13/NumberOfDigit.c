#include <stdio.h>


int main()
{
    int a=150, b=266, c=427, sum=0, count=0;

    int digit[10] = {0,}; //0으로 초기화하라는 뜻;

    sum = a*b*c;
    sum = 17037300;
    while(1)
    {
        count = sum % 10;
        digit[count] += 1;

        if(sum/10 < 1)
        {
            break;
        }
        else
        {
            sum = sum/10;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", digit[i]);
    }






    





}