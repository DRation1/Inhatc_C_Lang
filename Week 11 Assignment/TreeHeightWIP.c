#include <stdio.h>
#include <math.h> //기초 수식함수 헤더

int main()
{
    double height, distance, treeHeight, degrees, radians;
    
    printf("나무와의 길이(미터 단위): ");
    scanf("%lf", &distance);
    
    printf("측정자의 키(미터 단위): ");
    scanf("%lf", &height);
    
    printf("각도(도 단위): ");
    scanf("%lf", &degrees);
    
    radians = degrees * (3.141592/180.0);
    
    treeHeight = tan(radians) * distance + height;
    printf("나무의 높이(미터 단위): %lf\n", treeHeight);
    
    
}


