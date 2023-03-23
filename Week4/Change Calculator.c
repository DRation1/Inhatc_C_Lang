#include <stdio.h>

int main ()
{
    int price;
    int paidCash;
    int change;
    int savedChange;
    int c5000, c1000, c500, c100;

    printf("물건 값을 입력하세요\n");
    scanf("%d", &price);

    printf("투입한 금액을 입력하세요\n");
    scanf("%d", &paidCash);

    change = paidCash - price;
    savedChange = change;

    c5000 = change/5000;
    change = change % 5000;

    c1000 = change/1000;
    change = change % 1000;

    c500 = change/500;
    change = change % 500;

    c100 = change/100;
    change = change % 100;

    printf("\n거스름돈은 다음과 같습니다\n");
    printf("5000원권 %d장\n1000원권 %d장\n500원권 %d개\n100원권 %d개\n총합 %d원", c5000, c1000, c500, c100, savedChange);


}