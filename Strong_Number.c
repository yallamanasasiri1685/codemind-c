#include<stdio.h>
int main()
{
    int n,m,r,c=0,s=1,i,b;
    scanf("%d",&n);
    m=n;
    while(n)
    {
        i=1,b=1;
        r=n%10;
        while(i<=r)
        {
            b=b*i;
            i++;
        }
        c=c+b;
        n=n/10;
    }
    if(m==c)
    {
        printf("The number %d is a strong number",m);
    }
    else
    {
        printf("The number %d is not a strong number",m);
    }
}