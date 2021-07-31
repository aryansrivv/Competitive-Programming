#include <stdio.h>
int main ()
{
    int i ; 
    int n[1000] ;
    long long int a = 1 , b = 1 ; 
    for (i = 0 ; i < 1000 ; i++)
    { 
    scanf ("%1d\n" , &n[i] ) ;
    }
    for ( i = 0 ; i < 13 ; i++)
        {
            b = b*n[i] ;
        }
    for ( i = 0 ; i < 987 ; i++)
    {
        int j ; 
        for ( j = 0 ; j < 13 ; j++)
        {
            a = a*n[i+j] ; 
        }
        if ( b>= a )
        {
            b = a ; 
        }
    }
    printf ("%lld" , b ) ; 
    return 0 ; 

}