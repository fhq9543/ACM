#include<stdio.h>
#include<string.h>

int a[20][20];
int main()
{
    int n,num;
    int i,x,y,count,j;
    int x1,y1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        memset(a,0,sizeof(a));
        y = num/2;
        x = 0;
        count = 0;
        while(count<num*num)
        {
            if(a[x][y] == 0)
            {
                a[x][y] = ++count;
                x1 = x;
                y1 = y;
                if(--x<0)
                    x = num-1;
                if(++y>num-1)
                    y = 0;
                if(a[x][y])
                {
                    x = x1;
                    y = y1;
                }
            }
            else
                if(++x>num-1)
                    x = 0;
        }
        for(i = 0;i<num;i++)
        {
            for(j = 0;j<num;j++)
                printf("%4d",a[i][j]);
            printf("\n");
        }
    }


    return 0;
}
