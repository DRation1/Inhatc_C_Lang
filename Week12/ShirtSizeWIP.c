#include <stdio.h>

int solution(char shirtSize[], int shirtSizeLen)
{
    int* answer = (int*)malloc(sizeof(int)*6);
    for(int i = 0; i < shirtSizeLen; i++)
    {
        if(shirtSize[i] == 'XS')
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