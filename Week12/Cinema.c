#include <stdio.h>
#define SIZE 10


int main()
{
    int seats[SIZE] = { 0 };
    char answer;
    int answer2, i;
    while(1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n)");
        scanf("%c", &answer);

        if (answer == 'y')
        {
            printf("-------------------------------\n");
            printf("1 2 3 4 5 6 7 8 9 10\n");
            printf("-------------------------------\n");
            for(i = 0; i < SIZE; i++)
            {
                printf(" %d", seats[i]);
            }
            printf("\n");

            printf("몆번째 좌석을 예약하시겠습니까?");
            scanf("%d", &answer2);

            if(seats[answer2-1] == 0)
            {
                seats[answer2-1] = 1;
                printf("예약되었습니다\n");

            }
            else
            {
                printf("이미 예약된 좌석입니다\n");
            }
        }
        else
        {
            break;
        }
    }
}