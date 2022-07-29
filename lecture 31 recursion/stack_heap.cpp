#include <iostream>
using namespace std;
int fac(int n){

    if(n<=1){
        return 1;
    }
    int k=fac(n-1);

    return n*k;

}
int main() {
    int n;
    int b;
    if(true){
        int c;
    }
    cout<<fac(5)<<endl;

}

