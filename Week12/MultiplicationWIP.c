#include <stdio.h>


int main()
{

    int s, e, bigger, smaller;

    printf("첫번째 값을 입력해주십시오.");
    scanf("%d", &s);
    printf("두번째 값을 입력해주십시오.");
    scanf("%d", &e);

    while(1)
    {
        if ((s < 2 || s > 9) || (e < 2 || e > 9))
        {
            printf("INPUT ERROR!");
        }
        else
        {
            if(s > e)
            {
                bigger = s;
                smaller = e;
            }
            else
            {
                bigger = e;
                smaller = s;
            }
            break;
        }
    }

















}