#include<stdio.h>
int main()
{        
    int n,i,s[100],d,x=0;    
    while(scanf("%d",&n)!=EOF)    
    {            
        for(i=0;i<n;i++)    
        {                
            scanf("%d",&s[i]);        
        }        
        x=-1;//初始化        
        for(d=1;x!=n;d++)//这里应该是不相等的时候吧，因为下面在加加啊，如果有n个是他的因子才退出的啊        
        {                
            x=0;        
            for(i=0;i<n;i++)            
            {                    
                if(d%s[i]==0)                    
                    x++;            
            }            
            if(x==n)
                break;        
        }        
        printf("%d\n",d);//不是输出地址    
    }    
    return 0;
}

