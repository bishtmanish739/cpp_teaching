#include<iostream>
using namespace std;
int main(){
int arr[6]={1,2,3,4,5,6};
int a=5;
cout<<sizeof(a)<<endl;
cout<<&arr[0]<<endl;
cout<<&arr[1]<<endl;
cout<<&arr[2]<<endl;
cout<<&arr[3]<<endl;
cout<<&arr[4]<<endl;
cout<<&arr[5]<<endl;

cout<<sizeof(arr)<<endl;

int b[6];

cout<<sizeof(b)<<endl;

cout<<"Enter 6 number"<<endl;
for(int i=0;i<6;i++){
    cin>>arr[i];

}
cout<<"Value inside array"<<endl;
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}









}
