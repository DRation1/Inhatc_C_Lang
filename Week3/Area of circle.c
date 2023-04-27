#include <stdio.h>

int main (void)
{

    float rad;
    float area;

    printf("면적을 구하길 원하는 원의 반지름을 입력하세요");
    scanf("%f", &rad);
    
    area = rad * rad * 3.14;

    printf("원의 면적: %f", area);



}