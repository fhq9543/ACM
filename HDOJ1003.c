#include<stdio.h>
#include<stdlib.h>
int a[100005],sum[100005];
int main()
{    
    int ca,count=0;int n,i; 
    int r=1,max=a[1];
    scanf("%d",&ca);    
    while(ca--)    
    {       
               
        scanf("%d",&n);       
        for(i=1;i<=n;i++)       
            scanf("%d",&a[i]);       
        sum[1]=a[1];       
        r=1,max=a[1];       
        for(i=2;i<=n;i++)       
        {           
            if(sum[i-1]>0)           
            {               
                sum[i]=sum[i-1]+a[i];               
                if(sum[i]>max)                 
                {                 
                    max=sum[i];                 
                    r=i;               
                }           
            }           
            else            
            {             
                sum[i]=a[i];               
                if(sum[i]>max)                 
                {                
                    max=sum[i];                
                    r=i;               
                }           
            }       
        }       
        count++;       
        for(i=r-1;i>0;i--)       
            if(sum[i]<0)   
                break;       
        printf("Case %d:\n",count);       
        printf("%d %d %d\n",max,i+1,r);       
        if(ca!=0)   
            printf("\n");    
    }
    return 0;
}

