#include <iostream>
#include <string>

using namespace std;

#include <algorithm>

int main()
{
    char p[100];
    int n,i,j,f;
    int x,o;
    double c,s;
    double sum,max;
    scanf("%d",&n);
    while(n--)
    {
        max=0;sum=0;f=1;
        scanf("%d",&x);
        for(i=0;i<x;i++)
        {
            scanf("%s%lf%lf",p,&c,&s);
            if(s>0&&s<60)
                f=0;
            max+=c*s;
            sum+=c;
        }
        if(f)
        {
            printf("%.2lf\n",max*1.0/sum);
            if(n)           
                printf("\n");
        }
        else
        {
            printf("Sorry!\n");
            if(n)            
                printf("\n");
        }
    }


    return 0;
}
