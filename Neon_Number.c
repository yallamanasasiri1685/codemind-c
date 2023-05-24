#include<stdio.h>
int main()
{
    int n,m,i,r=0,s;
    scanf("%d",&n);
    m=n*n;
    while(m!=0)
    {
        s=m%10;
        m=m/10;
        r=r+s;
    }
    if(n==r)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}