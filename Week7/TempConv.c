#include <stdio.h>

void displayMenu()
{
    printf("==========================\n");
    printf("'c'섭씨 온도에서 화씨온도로 변환\n");
    printf("'f'화씨 온도에서 섭시온도로 변환\n");
    printf("'q'종료\n");
    printf("==========================\n");
}


int main()
{
    char selection;
    displayMenu();
    printf("메뉴에서 선택하세요");
    scanf("%c", &selection);
    
}