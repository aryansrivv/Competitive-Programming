#include <stdio.h>

int main ()
{
    int t ; 
    scanf ("%d\n", &t ); 
    while (t--)
    {
    int k;
    scanf("%d",&k);
    int x=4*k+1,y=2*k;
    int i,j;
    long long int sum = 0 ;  
    int arr[y];
    arr[0]=x;
    for (i=1;i<y;i++)
    {
        arr[i]=1;
    }
    for (i=3;i<y;i++)
    {
        if (x%i==0)
        {
            j=i;
            while (j<y)
            {
                arr[j]=i;
                j+=i;
            }
        }
    }
    for (i=0;i<y;i++)
    {
        sum+=arr[i]; 
    }
    printf ("%lld\n" , sum); 
    }
    return 0 ; 
}
