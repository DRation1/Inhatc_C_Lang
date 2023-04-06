#include <stdio.h>

int main()
{
    int x, y, z, i;
 

    printf("별의 줄 개수 입력:");
    scanf("%d", &i);
    y = i;
    for(y;y >= 1; y--)
    {
        for(x = 0;x < y; x++)
        {
            printf(" ");
        }
        for(z = i; z >= y; z--)
        {
            printf("*");
        }

        printf("\n");

    }
}