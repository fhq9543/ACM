#include"stdio.h"
#include"math.h"
int a[100];
int main()
{
    int x,y,i,g,f=1,n,j;
    double b,s=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        scanf("%d",&a[0]);
        x=0;
        for(i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<a[x])
                x=i;
        }
        y=a[x];a[x]=a[0];a[0]=y;
        printf("%d",a[0]);
        for(i=1;i<n;i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}

