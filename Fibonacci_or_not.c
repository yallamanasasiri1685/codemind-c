#include <stdio.h>
int main()
{
    int n,r,s=0,i,t,a,b,c;
    scanf("%d",&n);
    a=0,b=1;
    c=a+b;
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    if(c==n)
    {
        s++;
    }
    }
    if(s!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}