#include"stdio.h"
#include"string.h"
#include"math.h"
int a[100]={0};
int main()
{
    int x,y,g,f=1,n,j,l,h;
    int b[100][100]={0};
    int a,e,i,o,u;
    char c[60],t;
    double s[100]={0},k[100]={0};
//    double s=0;
    for(i=0;i<100;i++)
    {
        b[i][0]=1;
        b[i][i]=1;
    }
    while(scanf("%d",&n)!=EOF)
    {
//        scanf("%d",&g);
        printf("1\n");
        for(i=1;i<n;i++)
        {
            printf("1");
            for(j=1;j<=i;j++)
            {
                b[i][j]=b[i-1][j]+b[i-1][j-1];
                printf(" %d",b[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        n--;
    }
    return 0;
}

