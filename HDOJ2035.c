#include"stdio.h"
#include"string.h"
#include"math.h"
int a[100]={0},aa[100]={0},bb[100]={0};
int main()
{
    int x,y,z,g,f=1,n,m,j,l,h,i;
    int b[100][100]={0};
    char c[60],t;
    double s[100]={0},k[100]={0};
//    double s=0;
    
//    scanf("%d",&n);
    while(scanf("%d%d",&m,&n)&&(m+n))
    {
        x=y=z=0;f=1;
//        scanf("%d",&g);
//        for(i=0;i<m;i++)
//            scanf("%d",&aa[i]);
        for(i=0;i<n;i++)
        {
            f*=m;
            f%=1000;
        }
/*        for(i=0;i<m;i++)
            for(j=0;i<n;j++)
                if(aa[i]==bb[j])
                    a[x++]=i;
        if(a[0]!=0)
            printf("%d",aa[0]);
        for(i=1;i<m;i++)
            for(j=0;j<x;j++)
                if(i==a[j])
                    continue;
                else
                {
                    printf(" %d",aa[i]);
                    f=0;
                }
        if(f)
            printf("NULL");*/
        printf("%d",f);
        printf("\n");
        
    }
    return 0;
}

