//Factorial digit Sum 
//Incomplete 
#include <stdio.h>
#include <math.h>

int fac(int a ) 
{
    long long int m = 1 ;
    int i ; 
    for (i= 1 ; i <= a ; i++)
    {
        m*= i ; 
    }
    return (  m ) ;
}
 

 int sum_of_digits (long long int a )
 {
     int s ; 
    while (a > 0 )
    { 
        s = s + a%10 ; 
        a/=10 ; 
    }
    return (s ) ; 
 }


 int main ()
 {
     int n ; 
     printf ("Write an integer : " ) ; 
     scanf ("%d" , &n ) ; 
    long long int m =  fac (n) ; 
     printf ("factorial is %lld \n Sum of its digits is %d",m , sum_of_digits(m) ) ; 
     return 0 ; 
 }