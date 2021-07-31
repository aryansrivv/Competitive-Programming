#include "stdio.h"
int main ()
{
    int n = 0 ; 
    int a = 1 , b = 1 ; 
    int c = 0 ; 
    while (n < 4000000 )
    {
        n = a + b ; 
        a = b ; 
        b = n ; 
        if (n%2 == 0 )
        {
            c = c + n ; 
        }
    }
    printf ("%d" , c ) ;
}