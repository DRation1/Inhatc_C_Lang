#include <stdio.h>

int main()
{
    int n, sum;
    printf("정수를 입력하세요");
    scanf("%d",&n);
    sum = 0;

    do
    {
        sum = sum + n;

    } while(n != 0);
}