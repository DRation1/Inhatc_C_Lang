#include <stdio.h>

int solution(char shirtSize[], int shirtSizeLen)
{
    int* answer = (int*)malloc(sizeof(int)*6);
    for(int i = 0; i < shirtSizeLen; i++)
    {
        if(shirtSize[i] == 'XS') //strcmp 사용, 비교 후, answer 배열에 해당되는 인덱스 증감
        {
            answer[i] += 1;
        }
        

    }
    return answer;

}


int main()
{

    char shirtSize[] = { "XS", "S", "L", "L", "XL", "S"};
    int shirtSizeLen = 6;

    int ret = solution(shirtSize, shirtSizeLen);


}
