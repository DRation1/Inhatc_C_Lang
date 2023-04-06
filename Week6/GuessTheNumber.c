#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand((unsigned)time(NULL));
    int answer, guess, tries;

    answer = rand()%100;
    tries = 0;

    do
    {
        printf("정답을 추측하시오:\n");
        scanf("%d", &guess);
        tries++;
        if (guess < answer)
        {
            printf("숫자가 낮습니다\n");
        }
        if (guess > answer)
        {
            printf("숫자가 높습니다\n");
        }
    } while (guess != answer);

    printf("축하합니다, 정답은 %d였습니다. 시도횟수 = %d",answer, tries);
    
}