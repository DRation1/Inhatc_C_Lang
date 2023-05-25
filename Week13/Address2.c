#include <stdio.h>


int main()
{
    int i = 10;
    double f = 12.3;

    int *pi = NULL; // 바로 값을 대입하지 않을거라면 NULL이 필수, 하지않으면 크리티컬 에러가 발생
    double *pf = NULL;

    pi = &i;
    pf = &f;

    printf("%p %p\n", pi, &i); //pi값과 &i값은 동일
    printf("%p %p\n", pf, &f); //pf값과 &f값은 동일



}