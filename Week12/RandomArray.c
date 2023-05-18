#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main()
{
    int i;
    int score[SIZE];

    srand((unsigned)time(NULL));
    for(int i = 0; i < SIZE; i++)
    {
        score[i] = rand() % 100;
    }

    for(int i = 0; i < SIZE; i++)
    {
        printf("score[%d]=%d\n", i, score[i]);
    }

}