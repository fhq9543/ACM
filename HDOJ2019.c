#include"stdio.h"
#include"math.h"
int a[100]={0};
int main()
{
    int x,y,i,g,f=1,n,j;
    double b,s=0;
    
    while(scanf("%d%d",&n,&y)!=EOF&&n!=0||y!=0)
    {
        
        for(i=1;i<=n;i++)
        {
            if(a[1]>=y)
            {
                x=1;
            //    break;
            }
            scanf("%d",&a[i]);
            
            if(a[i-1]<y&&a[i]>=y)
            {
                x=i;
        //        break;
            }
        }
        
        
        if(a[n]<y)
            x=n+1;
        for(i=n;i>=x;i--)
            a[i+1]=a[i];
        a[x]=y;
        printf("%d",a[1]);
        for(i=2;i<=n+1;i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}

