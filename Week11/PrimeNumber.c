#include <stdio.h>

int main()
{

    //1부터 n까지의 소수를 출력

    int n;

    printf("숫자를 입력하세요");
    scanf("%d", &n);

    for(int count = 1; count < n; count++)
    {
        if(n%count == 0)
        {


        }
        else
        {
            printf("%d\n", count);
        }
    }




}

int get_integer()
{
    int n;
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    return n;
}

int is_prime(int n)
{
    int i;

    for(i=2; i < n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
        return 1;
    }
}
