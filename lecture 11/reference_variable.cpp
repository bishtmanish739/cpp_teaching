#include<iostream>
using namespace std;
int main(){
    int a=5;
    int x=a;
    cout<<" value of a is "<<a<<endl;
    cout<<"value of x is "<<x<<endl;

    cout<<" address of a is "<<&a<<endl;
    cout<<"address of x is "<<&x<<endl;


    cout<<endl<<endl;

    // this is refereance variable
    int&y=a;
     int&z=a;

     cout<<" value of a is "<<a<<endl;
    cout<<"value of y is "<<y<<endl;
cout<<"value of z is "<<z<<endl;

    cout<<" address of a is "<<&a<<endl;
    cout<<"address of y is "<<&y<<endl;
    cout<<"address of z is "<<&z<<endl;




}
