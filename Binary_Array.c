#include <stdio.h>
int main()
{
    int n,i,m=0,l=0,k,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
     if(ar[i]==1 || ar[i]==0)
     {
         c+=1;
     }
    }
    if(c==n)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
    
}