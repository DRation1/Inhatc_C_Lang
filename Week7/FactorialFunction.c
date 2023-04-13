#include <stdio.h>

int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;

}

int main()
{
    int num;
    printf("알고싶은 팩토리얼의 값을 입력하세요\n");
    scanf("%d", &num);

    printf("%d!의 값은 %d입니다", num, factorial(num));


}

