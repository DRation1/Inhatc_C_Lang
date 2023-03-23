#include <stdio.h>

int main()
{
    double x, y, result;

    printf("두 개의 실수를 입력하세요(n,n)\n");
    scanf("%lf, %lf", &x, &y);

    result = x + y;
    printf("%f + %f = %f\n", x, y, result);

    result = x - y;
    printf("%f - %f = %f\n", x, y, result);
    
    result = x * y;
    printf("%f x %f = %f\n", x, y, result);

    result = x/y;
    printf("%f / %f = %f\n", x, y, result);



}