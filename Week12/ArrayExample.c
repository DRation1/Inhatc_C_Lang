#include <stdio.h>


int main()
{
    int score[60]; //60개의 int자리값을 가지는 score배열
    float cost[12]; //12개의 float자리값을 가지는 cost배열
    char name[50]; //50개의 char자리값을 가지는 name배열


    //배열 인덱스 접근
    int i = 10;

    score[5] = 80;
    score[1] = score[0];
    score[i] = 100;
}