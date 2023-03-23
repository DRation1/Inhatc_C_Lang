#include <stdio.h>

int main (void)
{
    int speed = 300000;
    float distance = 149600000;
    double time;
    double timeM;

    time = distance/speed;

    timeM = time/60;

    printf("빛의 속도: %dkm/s\n", speed);
    printf("태양과 지구의 거리: %fkm\n", distance);

    printf("태양빛이 지구에 도달할때까지 걸리는 시간: %f분 또는 %f초", timeM, time);

}