#include <stdio.h>

int main (void)
{
    double rate;
    double usd;
    double krw;

    printf("환율을 입력하세요\n");
    scanf("%lf", &rate);

    printf("원화 금액을 입력하세요\n");
    scanf("%lf", &krw);

    usd = krw/rate;

    printf("원화 %f원은 %f달러입니다", krw, usd);


    


}