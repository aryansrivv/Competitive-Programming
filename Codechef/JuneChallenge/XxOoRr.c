#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define N 1000000007
#define lli long long int 

int main ()
{
    lli t;
    scanf ("%lld",&t);
    while (t--)
    {
        lli n,k;
        scanf("%lld %lld",&n,&k);
        int arr[32]={0};
        lli x;
        while (n--)
        {
            int i=0;
            scanf("%lld",&x); 
            while (x>0)
            {
                if (x%2==1)
                {
                    arr[i]++;
                }
                x/=2;
                i++;
            }
        }
        lli sum = 0 ; 
        for (int i=0;i<32;i++)
        {
            if ( arr[i]%k==0)
            {
                sum = sum + arr[i]/k;
            }
            else 
            {
                sum = sum + arr[i]/k + 1 ; 
            }
        }
        printf ("%lld\n",sum);
    }
    return 0;
}
