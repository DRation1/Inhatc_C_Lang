#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float result;

    printf("분자와 분모를 입력해주세요");
    scanf("%f %f", &n1, &n2);

    if (n2 == 0)
    {
        printf("입력된 분모가 0 입니다");
    }
    else
    {
        result = n1/n2;

        printf("결과: %f", result);
    }

}
