#include"stdio.h"
#include"math.h"
char a[100];
int main()
{
    int x,y,i,g,f=1,n,j;
    double b,s=0;
    scanf("%d",&n);
    while(n)
    {
        scanf("%s",a);
        x=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]-'0'>=0&&a[i]-'0'<=9)
                x++;
        }
        printf("%d\n",x);
        n--;
    }
    return 0;
}

