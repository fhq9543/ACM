#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100];
    int n;int i,j;
    int s=0,e=0;
    int cont=0;
    while(cin>>n&&n!=0){
        cont=0;
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        for(i=0;i<n;i++)
            for(j=i;j<n;j++){
                if(b[i]>b[j]) {
                    swap(b[i],b[j]);
                    swap(a[i],a[j]);
                }                
            }
        //取第一个 
        cont++;
        s=a[0];
        e=b[0];
        for(i=1;i<n;i++){
            if(a[i]>=e) {
                cont++;
                e=b[i];
            } 
        }
        cout<<cont<<endl;
    }
    return 0;
}
