#include <stdio.h>

int main ()
{
    int sel;
    do
    {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시요.\n");
        scanf("%d", &sel); 
        
    } while (sel < 1 || sel > 3);

    printf("선택된 메뉴=%d\n", sel);
    
}