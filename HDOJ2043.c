#include"stdio.h"
#include"string.h"
#include"math.h"
int a[1000]={0},aa[100]={0},bb[100]={0};
int main()
{
    int x,y,z,g,f=1,n,m,j,l,h,i,t;
//    int b[100][100]={0};
//    double a,b,c;
    char c[60];
    double s[100]={0},k[100]={0};
//    double s=0;
    
    scanf("%d",&n);
    while(n--)
    {
        m=0;h=0;f=0;g=0;
        a[2]=1;a[3]=2;
        scanf("%s",c);
        l=strlen(c);        
        if(l<8||l>16)        
        {            
            printf("NO\n");            
            continue;        
        }
        for(i=0;c[i]!='\0';i++)
            if(c[i]-'0'>=0&&c[i]-'0'<=9)
                m=1;
            else if(c[i]-'a'>=0&&c[i]-'a'<26)
                h=1;
            else if(c[i]-'A'>=0&&c[i]-'A'<26)
                f=1;
            else
                g=1;
        if(m+h+g+f>=3)
            printf("YES\n");
        else
            printf("NO\n");
//        scanf("%d",&g);
//        for(i=0;i<m;i++)
//            scanf("%d",&aa[i]);
        
//        printf("%d\n",m);
    }
    return 0;
}

