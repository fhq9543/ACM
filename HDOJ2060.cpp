#include <iostream>
#include <string>

using namespace std;

#include <algorithm>

int main()
{
    int n,i,j;int x,p,o;
    int sum,max;
    scanf("%d",&n);
    while(n--)
    {
        max=0;sum=0;j=7;
        scanf("%d%d%d",&x,&p,&o);
        if(x>=6)
        {
            sum=(x-6)*8+7+6+5+4+3+2+p;
            if(sum>=o)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
        {
            for(i=0;i<x;i++)
                sum+=j--;
            if(sum+p>=o)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }


    return 0;
}
