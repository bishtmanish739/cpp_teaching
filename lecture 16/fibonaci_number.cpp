//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int fibo[100];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cout<<"fibonaci series is "<<endl;
for(int i=0;i<=n;i++){
    cout<<fibo[i]<<" ";
}


}
