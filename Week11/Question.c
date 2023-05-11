#include <stdio.h>

int solution(int price, char grade);

int main()
{
    //회원 등급과 가격을 입력 받음: S, G, V - 5, 10, 15% 할인
    int price;
    char grade;

    printf("회원 등급을 입력해 주십시오\n");
    scanf("%c", &grade);

    printf("가격을 입력해 주십시오\n");
    scanf("%d", &price);


    printf("가격: %d원",solution(price, grade));

}

int solution(int price, char grade)
{
    int answer;

    switch (grade)
    {
    case 'S':
        answer = price * 0.95;
        break;
    case 'G':
        answer = price * 0.9;
        break;
    case 'V':
        answer = price * 0.85;
        break;
    default:
        printf("존재하지 않는 회원 등급입니다, 대소문자 또는 입력된 회원 등급을 확인 해 주십시오\n");
        break;
    }

    return answer;
}