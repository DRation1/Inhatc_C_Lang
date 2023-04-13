#include <stdio.h>


int max(int x, int y)
{
    return (x > y) ? x:y;
    // if (x > y)
    // {
    //     printf("더 큰 값은 %d입니다", x);
    // }
    // else if (y > x)
    // {
    //     printf("더 큰 값은 %d입니다", y);
    // }
    // else if (x == y)
    // {
    //     printf("두 수가 동일합니다");
    // }

}

int main()
{
    int n1, n2;
    printf("정수 2개를 입력하시오\n");
    scanf("%d %d", &n1, &n2);
    
    printf("더 큰 값은 %d입니다", max(n1, n2));


}