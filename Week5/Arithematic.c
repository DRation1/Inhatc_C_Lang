#include <stdio.h>

int main ()
{
    int n1, n2, result;
    char op;

    printf("수식을 입력하세요 (예: 2 + 5) \n");
    scanf("%d %c %d", &n1, &op, &n2);

    switch (op)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    case '%':
        result = n1 % n2;
        break;
    default:
        printf("지원되지 않는 연산자입니다");
        break;
    }
    
    printf("%d %c %d = %d", n1, op, n2, result);

}