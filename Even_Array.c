#include <stdio.h>
int main()
{
    int n,i,m=0,l=0,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
     if(ar[i]%2==0)
     {
         m++;
     }
    }
    if(m==n)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
    
}