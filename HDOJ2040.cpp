#include<iostream>
using namespace std;
void Fuck(int a,int b)
{
    int s1=0,s2=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            s1+=i;
    }
    for(int j=1;j<b;j++)
    {
        if(b%j==0)
            s2+=j;
    }
    if(s1==b&&s2==a)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}
int main()
{
    int a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        Fuck(a,b);
    }
    return 0;
}
