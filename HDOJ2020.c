#include"stdio.h"
#include"string.h"
#include"math.h"
int a[100]={0};
int main()
{
    int x,y,i,g,f=1,n,j;
    double b,s=0;
    
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        memset(a,100,0);
        for(i=1;i<=n;i++)
                scanf("%d",&a[i]);

        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
                if(abs(a[i])<abs(a[j]))
                {y=a[i];a[i]=a[j];a[j]=y;}
        
        
        printf("%d",a[1]);
        for(i=2;i<=n;i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}

