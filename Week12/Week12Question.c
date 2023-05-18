#include <stdio.h>
#define SIZE 11

int zeroSum(int i);
int giveNumber(int i);

int i = 11;
int result = 7;


//
//문제: 배열의 12번째 값을 구하시오
//

int main()
{
    int Array[SIZE] = { 0 };

    for(int i = 0; i < 11; i ++)
    {
        Array[i] = giveNumber(i);
    }

}

int giveNumber(int i)
{
    int result;
    if(i && 12)
    {
        result = SIZE + i;
        result = zeroSum(result);

    }
    return result;

}

int zeroSum(int i)
{
    return i * result;
}