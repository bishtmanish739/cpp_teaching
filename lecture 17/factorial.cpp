#include<iostream>
using namespace std;
int main(){
    int fac[100];
    int n;
    cin>>n;
    fac[0]=1;
    for(int i=1;i<=n;i++){
        fac[i]= i* fac[i-1];
    }

    for(int i=0;i<=n;i++){
        cout<<fac[i]<<" ";
    }


}
