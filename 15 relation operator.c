#include <stdio.h>

int main() {

   int m = 15;
   int n= 10;
  

   if( m == n ) {
      printf("Line 1 - m is equal to n\n" );
   } else {
      printf("Line 1 - m is not equal to n\n" );
   }
	
   if ( m < n ) {
      printf("Line 2 - m is less than n\n" );
   } else {
      printf("Line 2 - m is not less than n\n" );
   }
   if ( m > n) {
      printf("Line 3 - m is greater than n\n" );
   } else {
      printf("Line 3 - m is not greater than n\n" );
   }
   
   /* Lets change value of m and n */
   m = 30;
   n = 35;
	
   if ( m <= n ) {
      printf("Line 4 - m is either less than or equal to  n\n" );
   }
	
   if ( n >= m) {
      printf("Line 5 -  m is either greater than  or equal to n\n" );
   }
   
   return 0;
}