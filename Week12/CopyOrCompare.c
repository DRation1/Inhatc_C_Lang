#include <stdio.h>
#define SIZE 5


int main()
{
    int i;
    int a[SIZE] = { 1, 2, 3, 4, 5 };
    int b[SIZE] = { 1, 2, 3, 4, 5 }; 

    int c[SIZE] = { 1, 2, 3, 4, 5 };
    int d[SIZE];

    //c = d; 불가능.

    for(i = 0; i < SIZE; i++) //일일히 인덱스를 복사
    {
        a[i] = b[i];
    }



    for(i = 0; i < SIZE ; i++) //일일히 인덱스를 비교
    {
        if ( a[i] != b[i] )
        {
            printf("a[]와 b[]는 같지 않습니다.\n");
        }
        else
        {
            printf("a[]와 b[]는 같습니다.\n");
        } 
    } 
}