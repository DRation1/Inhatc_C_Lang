#include <stdio.h>

int main()
{
    float C;
    float F;

    printf("화씨 온도를 입력하세요: ");
    scanf("%f", &F);

    C = 5.0/9.0 * (F-32);

    printf("화씨 온도 %f를 섭씨 온도로 변환한 결과는:%fF 입니다", F, C);


}