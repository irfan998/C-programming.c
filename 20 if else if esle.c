#include<stdio.h>
int main()
{
  int x,y;
  printf(" enter a value :");
  scanf("%d%d",&x,&y);
  if(x<y)
  {printf("small");}
  else
  if(x==y)
  {printf("equal");}
  else
  {printf("big");}
  return 0;
}