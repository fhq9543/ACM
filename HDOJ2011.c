#include"stdio.h"
int main()
{
    int x,y,i,g,f=0;
    double b,s=0;
    scanf("%d",&x);
    while(x)
    {
        b=1.0;
        scanf("%d",&y);
        for(i=1;i<=y;i++)
        {
            s+=b/i;
            b=-b;
        }
        printf("%.2lf\n",s);
        s=0;
        x--;
    }
    return 0;
}

