#include<iostream>
using namespace std;
int main(){
   int num,rem;

   cout<<"Enter a 3 digit num"<<endl;
   cin>>num; //321
   //step -1
    rem=num%10; // 321
    // 1
    num=num/10;
    cout<<rem<<" --->"<<num<<endl;

    //step 2
   rem=num%10;

    num =num/10; // 3
cout<<rem<<" --->"<<num<<endl;
    //step 3
    rem=num%10;

    num=num/10;
   cout<<rem<<" --->"<<num<<endl;

   // print sum of digit


   cin>>num;
   int sum=0;
  // cout<<sum<<endl;

   sum=sum + num%10; //3
  num=num/10;
   sum=sum+num%10; //2
   num=num/10; //1
   sum=sum+num%10;

   cout<<sum<<endl;












}
