#include <stdio.h>
void inc(int counter);

int main()
{
    int i;

    i = 10;
    printf("호출 전 = %d\n", i);
    inc(i);
    printf("호출 후 = %d", i);
    

}

void inc(int counter)
{
    counter++;
}