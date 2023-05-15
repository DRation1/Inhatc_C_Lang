#include <stdio.h>
#include <time.h> //시간/날자 관련 함수 헤더
#include <stdlib.h> //표준 유틸리티 함수 헤더

int coinToss(void);

int main()
{
    int toss;
    int heads = 0, tails = 0; //던진 횟수, 뒷면 횟수, 앞면 횟수 변수를 생성
    srand((unsigned)time(NULL)); //현재 시각을 기반으로시드값 생성
    
    for(toss = 0; toss < 100; toss++) //100번 반복되는 for 루프
    {
        if(coinToss() == 1) //coinToss 함수의 반환값이 1이면 앞면 증감, 아니면 뒷면 증감
        {
            heads++;
        }
        else
        {
            tails++;
        }
    }
    printf("동전의 앞면: %d\n", heads);
    printf("동전의 뒷면: %d\n", tails);
    //각 횟수 출력
}

int coinToss()
{
    int head = rand() % 2; //0 또는 1을 대입하는 난수 생성기 
    return head; //생성값 변환
}

