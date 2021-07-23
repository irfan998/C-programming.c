#include <stdio.h>
int main()
{
    int m = 15,n = 45,p;
    printf("this program is of pre increament and post increment \n");
    p++m;
    printf("p =  %d\n",p);
    p=m++;
    printf("p =  %d\n",p);
    p=--n;
    printf("p = %d\n",p);
    p=n--;
    printf("p = %d\n",p);
    return 0;
}