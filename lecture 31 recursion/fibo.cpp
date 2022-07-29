#include <iostream>
using namespace std;
int fibo(int n){
    //base condition
    if(n==0 || n==1){
        return n;
    }
    /*
    if(n==0 ){
        return 0;
    }
    if(n==1){
        return 1;
    } */
    // curr =
    int a=fibo(n-1); //
    int b=fibo(n-2);  //0
    return a+b;
}

int main() {
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}

