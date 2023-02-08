#include <stdio.h>
#include <math.h>

#define C 1000000007 
  // 2^(n-1) is to be found  
  
int func(long long int a , long long int n , long long int c )
{
    long long int r = 1 ;
    a = a%c ; 
    if (a==0)
    {
        return 0 ; 
    }
    while (n>0)
    {
        if (n%2 == 1)
        {
            r = (r*a)%c;
        }
        n=n/2;
        a = (a*a)%c;
    }
    return r ;
}
  
  
int main()
{
    int t ; scanf ("%d",&t);
    while(t--)
    {
        long long int n ;
        scanf("%lld",&n);
        long long int answer = func(2,n-1,C) ;
        printf("%lld\n", answer );
    }
    return 0 ; 
}