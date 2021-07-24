#include<stdio.h>
int main ()
{
	int x,y;
	int temp;
	printf("write two numbers\n");
	scanf("%d",&x);
	printf("a= %d\n",x);
	scanf("%d",&y);
	printf("b= %d\n",y);
	printf("after swaping\n");
	temp=x;
	x=y;
	y=temp;
	printf("x= %d\ny= %d",x,y);
return 0;
}