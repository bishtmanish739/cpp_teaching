#include<iostream>
using namespace std;
int factorial(int n){
    // base case
    if(n==1 || n==0){
        return 1;
    }

    int k= factorial(n-1); // factorail(3!);
    // k= 6
    return n* k;

}
int main(){
int n;
cin>>n;

cout<<factorial(n)<<endl;
}
