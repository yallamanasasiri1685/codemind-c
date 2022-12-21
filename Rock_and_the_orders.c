#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,td,tc,x,y;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    x=a1+a2+a3;
    y=b1+b2+b3;
    td=x+y+d+d;
    if(x>=150&&y>=150)
    {
        tc=x+y+c;
    }
    else if(x>=150&&y<150||x<150&&y>=150)
    {
        tc=x+y+d+c;
    }
    else
    {
        tc=td;
    }
    if(tc<td)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}