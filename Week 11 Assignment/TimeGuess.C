#include <stdio.h>
#include <time.h>

int main()
{
    time_t start, end;
    start = time(NULL); //시작 당시 시간을 기록
    printf("10초가 되면 아무 키나 누르세요\n");
    while(1) //getchar가 실행되기 전까진 계속 반복
    {
        if (getchar())
        {
            break; //getchar이 실행되자마자 루프 탈출
        }
    }
    printf("종료되었습니다\n");
    end = time(NULL); //종료 당시에 시간을 기록
    printf("경과된 시간은 %ld 초 입니다\n", end - start); //종료 시간에서 시작 시간을 빼서 시간이 얼마나 지났는지 출력

}
