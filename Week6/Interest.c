#include <stdio.h>

int main ()
{
    double money= 1;

    for (int i = 2; i <= 30; i++)
    {
        money = money * 2;
        printf("%d일날 현재 금액= %f\n", i, money);
    }
}