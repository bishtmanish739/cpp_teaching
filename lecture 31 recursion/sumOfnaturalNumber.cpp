#include<iostream>
using namespace std;
int sum(int n){
    // base case
   if(n==1){
    return 1;
   }

   int k= sum(n-1) ;
   return n+k;



}
int main(){
int n;
cin>>n;

cout<<sum(n)<<endl;
}
