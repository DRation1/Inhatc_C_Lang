#include <stdio.h>
#define SEC_PER_MIN 60

int main ()
{
    int input, minute, second;

    printf("초를 입력하세요");
    scanf("%d", &input);

    minute = input/SEC_PER_MIN;
    second = input % SEC_PER_MIN;

    printf("%d초는 %d분 %d초 입니다", input, minute, second);

}