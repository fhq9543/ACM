#include"stdio.h"
#include"string.h"
#include"math.h"
int a[1000]={0},aa[100]={0},bb[100]={0};
int main()
{
    int x,y,z,g,f=1,n,m,j,l,h,i,t;
//    int b[100][100]={0};
//    double a,b,c;
//    char c[60];
    double s[100]={0},k[100]={0};
//    double s=0;
    
    scanf("%d",&n);
    while(n--)
    {
        m=1;h=2;
        a[2]=1;a[3]=2;
        scanf("%d",&x);
        f=1;
//        scanf("%d",&g);
//        for(i=0;i<m;i++)
//            scanf("%d",&aa[i]);
        
        for(i=4;i<=x;i++)
            a[i]=a[i-1]+a[i-2];
        printf("%d\n",a[x]);
    }
    return 0;
}

