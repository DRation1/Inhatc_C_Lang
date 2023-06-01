#include <stdio.h>

void f(void);

int i;
int main()
{

    for(i=0; i< 5; i++)
    {
        f();
        //printf("%d", i);
    }
    printf("\n%d", i);
    
}

void f(void)
{
    for(i = 0; i < 10; i++)
    {
        printf("%d", i);
    }
    //printf("\n");
    //printf("\n%d", i);
}