#include"stdio.h"
#include"string.h"
#include"math.h"
int a[100]={0};
int main()
{
    int x,y,i,g,f=1,n,j,l,h;
    int b[100][100]={0};
    double s=0;
    
    while(scanf("%d%d",&h,&l)!=EOF)
    {
        x=0;y=0;g=0;
        for(i=1;i<=h;i++)
            for(j=1;j<=l;j++)
            {
                scanf("%d",&b[i][j]);
                if(abs(b[i][j])>g)
                {
                    x=i;y=j;g=abs(b[i][j]);
                }
            }
        
        printf("%d %d %d",x,y,b[x][y]);
        printf("\n");
    }
    return 0;
}

