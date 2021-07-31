#include <stdio.h>
#include <math.h>

int main ()
{
   long long int n = 600851475143 ; 
   long long int m = sqrt (n ) ; 
   printf ("%lld" , m ) ; 
   long long int i ; 
   for (i = 3 ; i <= m ; i+=2)
   {
        if ( n%i == 0 )
        {
            printf ("%lld\n" , i ) ;
        }
   }
    return 0 ; 
}