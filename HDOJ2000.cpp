#include<iostream>
using namespace std;
int main()
{
char a,b,c, t;
while(cin>>a>>b>>c)
{
if(a>b){t=b;b=a;a=t;}
if(a>c){t=c;c=a;a=t;}
if(b>c){t=c;c=b;b=t;}
cout<<a<<" "<<b<<" "<<c<<endl;
}
return 0;
}
