#include"stdio.h"
#include"string.h"
#include"math.h"
//int a[100]={0},aa[100]={0},bb[100]={0};
int main()
{
    int x,y,z,g,f=1,n,m,j,l,h,i,t;
//    int b[100][100]={0};
    double a,b,c;
//    char c[60];
    double s[100]={0},k[100]={0};
//    double s=0;
    
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        f=1;
//        scanf("%d",&g);
//        for(i=0;i<m;i++)
//            scanf("%d",&aa[i]);
        
        
        if((a-b)<c&&(a+b)>c&&(a+c)>b) 
            printf("YES\n");
        else
            printf("NO\n");
    //    printf("\n");
    }
    return 0;
}

