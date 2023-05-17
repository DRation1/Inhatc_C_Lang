#include <stdio.h>
#include <time.h> //시간/날자 관련 함수 헤더
#include <stdlib.h> //표준 유틸리티 함수 헤더
#include <conio.h> //콘솔 입출력 함수 헤더

void dispCar(int carNo, int distance) //별 출력 함수
{
    int i; //for 반복문 변수
    printf("CAR #%d:", carNo); //자동차 번호를 출력 
    for(i = 0; i < distance/10; i++) //main에서부터 받은 "거리"값을 기반으로 별 갯수 출력
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int i;
    int car1Dis = 0, car2Dis = 0; //각 "자동차"의 주행거리를 저장할 변수
    srand((unsigned)time(NULL)); //시드값 생성
    for(i=0; i < 6; i++) //6번 반복되는 for반복문
    {
        car1Dis += rand() % 100; //각 자동차의 주행거리를 난수 생성기로 0부터99까지의 숫자를 생성하고 주행거리 변수에 할당
        car2Dis += rand() % 100;
        dispCar(1, car1Dis); //각 자동차의 번호와 주행거리를 별을 출력하는 함수에 전달
        dispCar(2, car2Dis);
        printf("------------\n"); 
        _getch(); //키 입력시에 반복문이 다시 반복되도록
    }
}
