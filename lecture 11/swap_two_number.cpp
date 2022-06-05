#include<iostream>
using namespace std;
// pass by value
void swap(int a,int b){
    cout<<a<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<" value of a inside function "<<a <<endl;  //3
     cout<<" value of b inside function "<<b <<endl; //2
     return ;

}

// Pass by reference
void swap1(int &x,int& y){

    int temp=x;
    x=y;
    y=temp;
    cout<<" value of a inside swap 1 function "<<x <<endl;  //3
     cout<<" value of b inside swap1  function "<<y <<endl; //2
     return ;

}
int main(){
    int a, b; // 2,3
cout<<"enter two number"<<endl;
cin>>a>>b;
swap(a,b);

cout<<" value of a inside main"<<a <<endl;  //2
     cout<<" value of b inside main "<<b <<endl; //3

swap1(a,b);

cout<<" value of a inside main"<<a <<endl;  //3
     cout<<" value of b inside main "<<b <<endl; //2



 }
