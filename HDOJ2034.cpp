#include<iostream>
using namespace std;
int main()
{
    int a,b,m[101],n[101],k[101],i,j,t,d;
    while(cin>>a>>b&&(a||b))
    {
        t=0;
        for(i=0;i<a;i++)
            cin>>m[i];
        for(j=0;j<b;j++)
            cin>>n[j];
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
                if(m[i]==n[j])
                {
                    m[i]=0;
                    continue;
                }
        }
        for(i=0;i<a;i++)
        {
            if(m[i]!=0)
            {
                t++;
                break;
            }
        }
        if(t==0)
            cout<<"NULL";
        else
        {
            j=0;
            for(i=0;i<a;i++)
            {
                if(m[i]!=0)
                {
                    k[j]=m[i];
                    j++;
                }
            }
            t=j;
            for(i=0;i<t-1;i++)
            {
                for(j=0;j<t-1-i;j++)
                {
                    if(k[j]>k[j+1])
                    {
                        d=k[j];
                        k[j]=k[j+1];
                        k[j+1]=d;
                    }
                }
            }
            for(j=0;j<t;j++)
            {
                cout<<k[j]<<" ";
            }
        }
        cout<<endl;
    }
}

