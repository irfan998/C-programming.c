#include<stdio.h>

int main()
{
    int m,n, add, subtract, multiply, remainder;
    float divide;
    printf("Enter two integers: \n");
    scanf("%d%d", &n, &n);

    add = m+n;
    subtract = m-n;
    multiply = m*n;
    divide = m/(float)n;
    remainder = m%n;

    printf("\n\nAddition of the numbers = %d\n", add);
    printf("\nSubtraction of 2nd number from 1st = %d\n", subtract);
    printf("\nMultiplication of the numbers = %d\n", multiply);
    printf("\nDividing 1st number from 2nd = %f\n", divide);
    printf("\nRemainder on Dividing 1st number by 2nd is %d\n", remainder);
    return 0;
}