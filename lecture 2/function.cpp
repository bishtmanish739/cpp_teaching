#include<bits/stdc++.h>
using namespace std;

/*syntax for funtion
return type name parameter*/

void  fun(){
  cout<<" I am void funtion"<<endl;
}
int  fun1(){
  cout<<" I am return int  funtion"<<endl;
  return 500;
}

int   sum(int a,int b){
  return a+b;
}
int main(){


fun();
int r= fun1();
cout<<r<<endl;
cout<<fun1()<<endl;

r=sum(12,14);
cout<<r<<endl;



return 0;
}



