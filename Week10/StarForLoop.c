#include <stdio.h>

int main()
{
    int NOL = 5;


    for (int lineNo = 1; lineNo <= NOL; lineNo++)
    {
        for(int i = NOL - 1; i >= lineNo; i--)
        {
            printf(" ");
        }

        for(int i = 1; i <= lineNo; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    







}