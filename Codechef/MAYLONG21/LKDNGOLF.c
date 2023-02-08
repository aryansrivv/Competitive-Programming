#include <stdio.h>

int main ()
{
    int t ; scanf ("%d", &t) ; while (t--)
    {
    long long int N , x , k ; scanf ("%lld %lld %lld" , &N , &x  ,&k ) ; 
    if ( x%k == 0 || (N+1-x)%k==0 )
    {
        printf ("YES\n"); 
    }
    else 
    {
        printf  ("NO\n") ; 
    }
    }
    return 0 ; 
}