#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
    int n,m,i,j,x,y;
    char ch,t;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%c%c%d",&t,&ch,&x);
        if(ch>='A'&&ch<='Z')
            y=ch-'A'+1;
        else
            y=-(ch-'a'+1);

        printf("%d\n",x+y);
    }
    return 0;
}
