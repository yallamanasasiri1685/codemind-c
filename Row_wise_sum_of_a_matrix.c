#include<stdio.h>
int main()
{
    int m,n,i,j,sum;
    scanf("%d%d",&n,&m);
    int ar[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+ar[i][j];
        }
        printf("%d ",sum);
    }
}