#include <stdio.h>

int main ()
{
    int t ; 
    scanf ("%d\n" , &t ) ; 
    while (t--)
    {
        int n , m ;
        scanf ("%d %d",&n,&m);
        long long int sum=n-1;
        for (int a=2;a<n;a++)
        {
            for (int b=a+1;b<n+1;b++)
            {
                int c = m/b;
                if ((b*c)%a==0)
                {
                    sum++;
                }
            }
        }
        printf ("%d\n",sum);
    }
    return 0 ; 
}