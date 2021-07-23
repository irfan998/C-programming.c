#include <stdio.h>
int main() 
{
    char c;
    int delta ;
    printf("enter an alphabet to check:");
     scanf("%c" ,&c );
    delta  = ( c== 'a' ||c =='i' || c== 'o' ||c== 'e' || c== 'u') ;
     if (delta )
       printf(" %c is a vowel .",c);
       else
       printf( "%c is a consonant", c);
    return 0;
}