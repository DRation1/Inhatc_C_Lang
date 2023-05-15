#include <stdio.h>
#include <time.h> //시간/날자 관련 함수 헤더
#include <stdlib.h> //표준 유틸리티 함수 헤더
#include <conio.h> //콘솔 입출력 함수 헤더

void dispCar(int carNo, int distance)
{
    int i;
    printf("CAR #%d:", carNo);
    for(i = 0; i < distance/10; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int i;
    int car1Dis = 0, car2Dis = 0;
    srand((unsigned)time(NULL));
    for(i=0; i < 6; i++)
    {
        car1Dis += rand() % 100;
        car2Dis += rand() % 100;
        dispCar(1, car1Dis);
        dispCar(2, car2Dis);
        printf("------------\n");
        _getch();
    }
}
