#include<iostream>
using namespace std;
int a=10;
int main(){


int a=15;
cout<<a<<endl;

cout<<::a<<endl;  // :: double colon is known as scope resolution operator it is used to access global variable

if(true)
    {
    int b=10;
cout<<b<<endl;
}


//cout<<b<<endl;

}
