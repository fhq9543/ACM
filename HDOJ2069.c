#include<stdio.h>
int main()
{
    int a,b,c,d,e,count,n;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(a=0;a<=100;a++)
            for(b=0;5*b<=n-a;b++)
                for(c=0;10*c<=n-a-5*b;c++)
                    for(d=0;25*d<=n-a-5*b-10*c;d++)
                        for(e=0;50*e<=n-a-5*b-10*c-25*d;e++)
                        if(a+5*b+10*c+25*d+50*e==n&&a+b+c+d+e<=100)count++;
       printf("%d\n",count);
    }
}
