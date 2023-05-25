#include <stdio.h>

int main()
{
    int i = 10;
    int* p;
    p = &i;
    printf("%d \n", *p);



    int *pi = (int *)10000; //초기 주소가 10000인건데, 만약 여기서 pi + 1을 하면 4바이트씩 증감.
    char *pc = (char *)10000;
    double *pd = (double *)10000;
}