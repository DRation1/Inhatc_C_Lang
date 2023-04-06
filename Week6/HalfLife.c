#include <stdio.h>

int main()
{
    int halflife, years, initial;
    double current;
    printf("반감기를 입력하시오(년):");
    scanf("%d", &halflife);
    initial = 100;
    current = initial;

    while(current > (initial*0.1))
    {
        years += halflife;
        current = current / 2;
        printf("%d년 후에 남은 양%f\n", years, current);
    }

    printf("1/10 이하로 되기까지 걸린 시간= %d년", years);
}