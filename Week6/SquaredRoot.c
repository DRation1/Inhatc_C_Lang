#include <stdio.h>


int main()
{
    int n;

    printf("====================\n");
    printf(" n n의 제곱 \n");
    printf("====================\n");

    n = 1;

    while(n <= 10)
    {
        printf("%5d   %5d\n", n, n*n);
        n++;

    }
}