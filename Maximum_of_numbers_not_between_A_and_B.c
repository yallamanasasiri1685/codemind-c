#include <stdio.h>
int main()
{
    int n,ar[1000],a,b,i,c=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    m=ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]<a || ar[i]>b)
        {
            if(ar[i]>m)
            {
                c++;
                m=ar[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}