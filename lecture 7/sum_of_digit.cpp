#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=0;



    while(num>0){
        sum= sum + num%10; /// a+=1 ==> a= a+1;
        num=num/10;

    }
    cout<<sum<<endl;



}
