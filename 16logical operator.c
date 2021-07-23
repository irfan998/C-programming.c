#include <stdio.h>
 
int main()
{
   int m=20,n=10;
   int o=10,p=15;
   if (m>n && m !=0)
   {
      printf("&& Operator : Both conditions are true\n");
   }
   if (o>p || p!=20)
   {
      printf("|| Operator : Only one condition is true\n");
   }
   if (!(m>n && m !=0))
   {
      printf("! Operator : Both conditions are true\n");
   }
   else
   {
      printf("! Operator : Both conditions are true. " \
      "But, status is inverted as false\n");
   }
  
  return 0;
}