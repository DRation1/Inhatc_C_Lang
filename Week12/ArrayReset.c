#include <stdio.h>
#define SIZE 5

int main()
{
    int i;
    int scores[SIZE] = { 31, 63, 62, 87, 14 };

    for (i = 0; i < SIZE; i++)
    {
        printf("Scores[%d] = %d\n", i, scores[i]);

    }


    int scores2[SIZE] = { 31, 63 };

    for (i = 0; i < SIZE; i++)
    {
        printf("Scores2[%d] = %d\n", i, scores2[i]);

    }


    int scores3[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Scores3[%d] = %d\n", i, scores3[i]);

    }


}