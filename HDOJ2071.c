#include<stdio.h>

int main()
{
    int n,m,i;
    double max,t;
    scanf("%d",&n);
    while(n--)
    {
        max = -999999;
        scanf("%d",&m);
        for(i = 0;i<m;i++)
        {
            scanf("%lf",&t);
            if(t>max)
                max = t;
        }
        printf("%.2lf\n",max);
    }
    return 0;
}
