#include <stdio.h>
int main()
{
    int   x,y;
    x=15;
    y > x ;
    printf("  put number greater than fifteen : %d \n " , y>x); 
    scanf("%d", &y);
    if (y>x)
    {
       printf(" statement is true "); 
    }
    else
    {
        printf("statement is false ");
        
    }
    return 0;
}