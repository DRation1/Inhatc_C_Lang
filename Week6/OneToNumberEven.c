#include <stdio.h>

int main()
{
    int n, sum, i;
    printf("정수를 입력하세요\n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    printf("1부터 %d까지의 합은 %d입니다", n, sum);



}