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
    scanf("%d",&n);
    while(n)
    {
        scanf("%s",c);
        x=strlen(c);
        x--;
        f=1;
        for(i=0;i<=x/2;i++)
            if(c[i]!=c[x-i])
            {f=0;break;}
        if(f)
            printf("yes\n");
        else
            printf("no\n");
        n--;
    }
    return 0;
}

