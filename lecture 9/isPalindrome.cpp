#include<iostream>
using namespace std;
bool reverse(int num){
int r=0;
int temp=num;
while(num>0){
    r=r*10+num%10;
    num=num/10;
}
//cout<<r<<endl;
if(r==temp){
    return true;
}

    return false;

}
int main(){
int num;
cout<<"enter the number"<<endl;
cin>>num;
bool check=reverse(num);
if(check==true){
        //cout<<check<<endl;
    cout<<"given number is pelindrom"<<endl;
}
else{
 cout<<"number is not pelindrom"<<endl;
}
}
