#include<iostream>
using namespace std;
int main(){
// assignment operator
int a;
a=10;
// = (equal to operator is assignment operator)

// Unary operator
// post increment  (++)
a++;
// a=11;

// post increment means first use value by a and then increase by one    a++ !=(a=a+1)
//whereas pre increment mean first increment value and then use the variable  ++b=> b=b+1;
cout<<a<<endl;  //11
cout<<a++<<endl;  // 12   ( 11 )
cout<<a<<endl; //12

// pre increment (++)

int b=10;
++b; // b=b+1;
// b=11

cout<<b<<endl;  //11
cout<<++b<<endl;  // 12
cout<<b<<endl; //12

int c=10;
int d=10;
cout<<"i am here"<<endl;
cout<<c++ + ++c<<endl;
cout<<c<<endl;


// Post decrement (--)
cout<<"Post Decreament"<<endl;
int e=10;
e--;
cout<<e<<endl;  //9
cout<<e--<<endl; //9
cout<<e<<endl;//8

// pre decrement

int f=10;
--f;
cout<<f<<endl;//9
cout<<--f<<endl; //8
cout<<f<<endl; //8


// associativity
int x=10;
int y=10;
cout<<" hands on"<<endl;
cout<<x<<" "<< ++x + x--<<endl;
/// will explain later

cout<<x<<endl;


//Logical operator
// true && true = true
// true && false = false
// false && false =false
// false && true = false

// // true || true = true
// true || false = true
// false || false =false
// false || true = true


// true=1 && false =0
// logical AND
cout<< (1 && 1)<<endl;


// logical or
cout<< (1 || 1)<<endl;
cout<< (1 ||0)<<endl;


// ternary operator

// =>      (condition)? statement1 :statement2 ;
(5<10)? cout<< "Hello I am smaller"<<endl: cout<<" Hello I am grater"<<endl;
(5>10)? cout<< "Hello I am smaller"<<endl: cout<<" Hello I am grater"<<endl;


//bitwise operator used to perform bit level operation

a=3;
b=5;

// 011
// 101
//001

cout<<"BitWise And"<<endl;
cout<<(3& 5)<<endl;
cout<<(5&5)<<endl;

cout<<"BitWise OR"<<endl;
cout<<(3| 5)<<endl;
cout<<(5|5)<<endl;

cout<<"BitWise XOR"<<endl;
cout<<(1^1)<<endl;
cout<<(1^0)<<endl;
cout<<(0^0)<<endl;

cout<<(3^5)<<endl;
cout<<(5^5)<<endl;   // if we do same number xor result will be always 0

// 0 xor 1 = 1
// 1 xor 0 =1
// 0 xor 0 =0
// 1 xor 1 =0










}
