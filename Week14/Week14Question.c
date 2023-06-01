#include <stdio.h>
#include <string.h> //문자열 제어 함수 라이브러리

int main()
{
    //KOIOIOI
    char Array[10001];
    int i, KOI = 0, IOI = 0;
    scanf("%s", Array);

    for(i = 0; i < strlen(Array) - 2; i++)
    {
        if(Array[i] == 'K' && Array[i+1] == 'O' && Array[i+2] == 'I')
        {
            KOI ++;
        }
        else if(Array[i] == 'I' && Array[i+1] == 'O' && Array[i+2] == 'I')
        {
            IOI ++;
        }
    }

    printf("%d\n%d", KOI, IOI);


}