#include <stdio.h>

int main ()
{
    char ch;
    printf("문자를 입력하시오");
    ch = getchar();

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("입력하신 %c는 대문자입니다", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("입력하신 %c는 소문자입니다", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("입력하신 %c는 숫자입니다", ch);
    }
    else
    {
        printf("입력하신 %c는 기타 문자입니다", ch);
    }


}