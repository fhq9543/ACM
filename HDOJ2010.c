#include"stdio.h"
#include"math.h"
int main()
{
    int x,y,i,g,s,b,f=0;
    while(scanf("%d%d",&x,&y)==2)
    {
        f=0;
        for(i=x;i<=y;i++)
        {
            g=i%10;
            s=i/10%10;
            b=i/100;
            if(f==0 && i==g*g*g+s*s*s+b*b*b)
            {
                printf("%d",i);
                f=1;
            }
            else if(f==1 && i==g*g*g+s*s*s+b*b*b)
                printf(" %d",i);
        }
        if(f)
            printf("\n");
        else
            printf("no\n");
    }
    return 0;
}

