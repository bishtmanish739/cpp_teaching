#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    int xorr=0;
    for(int i=0;i<n;i++){
       xorr= arr[i] ^ xorr;
    }
    cout<<" unique number is-> "<<xorr<<endl;

}
