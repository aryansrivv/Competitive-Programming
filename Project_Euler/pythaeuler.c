#include <stdio.h>
int main ()
{
    int a = 1 , b = 1 ,c  ; 
    for ( a = 1 ; a < 1000 ; a++)
    {
        for (b = 1 ; b < 1000 ; b++ )
        {
            c = 1000 - a - b ; 
            int x = a*a , y = b*b , z = c*c ; 
            if ( x + y == z )
            {
                printf ("%d %d %d" , a , b , c ) ; 
                break ; 
            }
        }
    }
    return 0 ; 
}