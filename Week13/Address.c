#include <stdio.h>

int main(void)
{
    int i = 10;
    char c = 69;
    float f = 12.3;

    printf("i의 주소: %p\n", &i); 
    printf("c의 주소: %p\n", &c); 
    printf("f의 주소: %p\n", &f); 

    int *a; //주소값 저장변수
    int* b;
    int * c; //전부 정답이다

    int num = 10;
    int *p;//포인터 변수
    p = &num; //num의 주소값이 p에 들어감.

    //만약 p를 쓰면 10의 주소값이, *p를쓰면 10이 나온다.


    char c = 'A'; // 문자형 변수 c
    float f = 36.5; // 실수형 변수 f
    double d = 3.141592; // 실수형 변수 d

    char *pc = &c; // 문자를 가리키는 포인터 pc
    float *pf = &f; // 실수를 가리키는 포인터 pf
    double *pd = &d; // 실수를 가리키는 포인터 pd

    //포인터 변수의 크기는 os의 비트에 따른다. 32비트면 4바이트, 64라면 8.


}