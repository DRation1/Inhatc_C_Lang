#include <stdio.h>

int solution(char shirtSize[], int shirtSizeLen)
{
    int* answer = (int*)malloc(sizeof(int)*6);
    for(int i = 0; i < shirtSizeLen; i++)
    {
        if(strcmp(shirtSize[i], "XS") == 0)
        {
            answer[0]++;
        }
        else if(strcmp(shirtSize[i], "S") == 0)
        {
            answer[1]++;
        }
        else if(strcmp(shirtSize[i], "M") == 0)
        {
            answer[2]++;
        }
        else if(strcmp(shirtSize[i], "L") == 0)
        {
            answer[3]++;
        }
        else if(strcmp(shirtSize[i], "XL") == 0)
        {
            answer[4]++;
        }
        else if(strcmp(shirtSize[i], "XXL") == 0)
        {
            answer[5]++;
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
