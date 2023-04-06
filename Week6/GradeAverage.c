#include <stdio.h>

int main()
{
    int grade, n;
    float sum, average;


    printf("종료하려면 음수를 입력하세요\n");
    grade = 0;
    n = 0;
    sum = 0;


    while(grade >= 0)
    {
        printf("성적을 입력하세요");
        scanf("%d", &grade);
        sum += grade;
        n++;
    }

    sum = sum - grade;
    n--;

    average = sum / n;
    printf("성적의 평균은 %f입니다", average);





}