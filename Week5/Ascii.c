#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("문자를 입력하시오");
    scanf("%c", &ch);

    printf("입력하신 문자 %c의 ASCII코드는 %d입니다", ch, ch);


}