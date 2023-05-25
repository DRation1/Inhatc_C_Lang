#include <stdio.h>

int main()
{
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n", i, pi);

    (*pi)++; //pi가 가르키는 위치의 값을 증감
    {
        printf("i = %d, pi = %p\n", i, pi);
    }

    *pi++; //pi가 가르키는 위치의 값을 가져온 후 pi 증감.
    {
        printf("i = %d, pi = %p\n", i, pi);
    }


}