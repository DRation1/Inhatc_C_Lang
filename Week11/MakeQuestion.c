//
//출력되는 결과값을 예상하시오
//



#include <stdio.h>
void display1(int num);
void display2(int num);

int A; 
int B; 
int ans = 57;


int main()
{

    int B = 7;

    if (A & B == 1)
    {
        ans = 78;
        display1(B);
    }
    else
    {
        ans = 54;
        display2(A);
    }
    printf("%d", ans);

}

void display1(int num)
{
    ans = 20 + A;
}

void display2(int num)
{
    ans = 35 + B;
}