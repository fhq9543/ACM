#include"stdio.h"
#include"string.h"
#include"math.h"
int a[100]={0};
int main()
{
    int x,y,z,g,f=1,n,j,l,h,i;
    int b[100][100]={0};
    char c[60],t;
    double s[100]={0},k[100]={0};
//    double s=0;
    
    scanf("%d",&n);
    while(n--)
    {
        x=y=z=0;
//        scanf("%d",&g);
        for(i=0;i<6;i++)
            scanf("%d",&a[i]);
        z=a[2]+a[5];
        y=a[1]+a[4];
        x=a[0]+a[3];
        if(z>60)
        {
            y++;z-=60;
        }
        if(y>60)
        {
            x++;y-=60;
        }
        printf("%d %d %d",x,y,z);
        printf("\n");
        
    }
    return 0;
}

