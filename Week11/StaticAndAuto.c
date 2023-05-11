#include <stdio.h>



void sub()
{
    static int scount = 0;
    int acount = 0;
    printf("scount = %d ", scount);
    printf("acount = %d\n", acount);
    scount++;
    acount++;   

}

int main()
{

    sub();  //scount = 0 acount = 0
    sub();  //scount = 1 acount = 0
    sub();  //scount = 2 acount = 0



}