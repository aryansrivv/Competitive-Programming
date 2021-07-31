// Sum of primes upto 2000000 // 
#include <stdio.h>
#include <math.h>
#define LIMIT 2000000  

int main ()
{
    int n = 5 , i ; long long int  m = 5 ;
    while ( n < LIMIT )
    {
    for ( i = 3 ; i < n/5 ; i +=2 )
    {
        if ( n%i == 0 )
        {
            i = 0 ; 
            break ;
        }
    }
    if ( i != 0 )
    {
        m = m + n ; 
    }
    n+=2 ; 
    }
    printf("%lld" , m ) ; 
    return 0 ; 
}
