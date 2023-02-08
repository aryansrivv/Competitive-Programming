#include <stdio.h>

int main ()
{
    int t ; 
    scanf ("%d\n" , &t ) ; 
    while (t--)
    {
        int x , a , b ; 
        scanf ("%d %d %d" , &x,&a,&b) ;
        printf ("%d\n" , (a + (100-x)*b)*10 );  
    }
    return 0 ; 
}