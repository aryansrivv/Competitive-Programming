#include <stdio.h>
#include <math.h>
int main ()
{
    long long int n = 5 , i , k = 2  ;
    while ( k != 10001)
    {
    for ( i = 3 ; i < n ; i+=2) 
    {
        if (n%2 == 0 || n%i == 0 )
        {
            i = 0 ; 
            n++ ; 
            break ; 
        }
    }
    if ( i != 0 )
    {
        k++ ;
        n++ ; 
    }
    }
    printf("%lld", n-1 ) ; 
    return 0 ; 
}