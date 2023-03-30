#include <stdio.h>

int main ()
{
    int grade;

    printf("성적을 입력하세요");
    scanf("%d", &grade);

    if (grade >= 90)
    {
        printf("합격: 학점A\n");
    }
    else if(grade >= 80)
    {
        printf("합격: 학점B\n");
    }
    else if(grade >= 70)
    {
        printf("합격: 학점C\n");
    }
    else if(grade >= 60)
    {
        printf("합격: 학점D\n");
    }
    else
    {
        printf("불합격: 학점F\n");
    }
    
}