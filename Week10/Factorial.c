#include <stdio.h>

int factorial(int n);

int main()
{
    int count = 4;

    printf("%d", factorial(4));

}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return factorial(n-1); 
    }

}