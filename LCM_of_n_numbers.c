#include<stdio.h>
int main()
{
    int n,ar[2001],i,lcm,gcd,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    lcm=ar[0];
    for(i=1;i<n;i++)
    {
        gcd=1;
        for(j=2;j<=ar[i]&&j<=lcm;j++)
        {
            if(ar[i]%j==0 && lcm%j==0)
            {
                gcd=j;
            }
        }
        lcm=(ar[i]*lcm)/gcd;
    }
    printf("%d",lcm);
}