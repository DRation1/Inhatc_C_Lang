#include <stdio.h>
#include <math.h> //기초 수식함수 헤더

int main()
{
    double height, distance, treeHeight, degrees, radians; //각각 순서대로 측정자의 키, 나무와의 거리, 나무의 높이, 각도, 그리고 라디안/호도를 의미
    
    printf("나무와의 거리(미터 단위): "); 
    scanf("%lf", &distance); //나무와의 거리를 입력받고 distance 변수에 저장
    
    printf("측정자의 키(미터 단위): ");
    scanf("%lf", &height); //측정자의 키를 입력받고 height 변수에 저장
    
    printf("각도(도 단위): ");
    scanf("%lf", &degrees); //각도를 입력받고 degrees 변수에 저장
    
    radians = degrees * (3.141592/180.0); //라디안 계산식
    
    treeHeight = tan(radians) * distance + height; //탄젠트, 라디안, 거리, 키를 이용해 나무의 높이 구하기
    printf("나무의 높이(미터 단위): %lf\n", treeHeight); //나무의 높이 출력
    
    
}


