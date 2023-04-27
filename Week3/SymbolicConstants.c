#include <stdio.h>
#define TAX_RATE 0.2

int main (void)
{
    const int MONTHS = 12;

    int mSalary, ySalary;

    printf("월급을 입력하세요\n");
    scanf("%d" , &mSalary);

    ySalary = mSalary * MONTHS;;
    printf("연봉은 %d입니다\n", ySalary);
    printf("세금은 %f입니다", ySalary * TAX_RATE);

    return 0;



}