#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, root;

    printf("방정식의 계수 a b c를 입력하세요\n");
    scanf("%d %d %d", &a,&b,&c);

    if(a==0)
    {
        printf("방정식의 근은 %f입니다.", -c / b);
    }
    if ((b*b) - (4.0*a*c) < 0)
    {
        printf("실근이 존재하지 않습니다");
    }
    else
    {
        printf("방정식의 근은 %f입니다.\n", (-b + sqrt(root)) / (2.0 * a));
        printf("방정식의 근은 %f입니다.\n", (-b - sqrt(root)) / (2.0 * a));
    }

}