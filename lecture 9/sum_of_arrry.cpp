#include<iostream>
using namespace std;


int main(){
    int length;

    cout<<"enter length of array"<<endl;
     cin>>length;

    int arr[10];
    int sum=0;
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    for(int i=0;i<length;i++){
        sum+=arr[i];
            // a+=1 ==> a=a+1;
          // sum+=arr[i]    ==> sum=sum+arr[i];
    }
    cout<<"sum of array is"<<sum<<endl;





}

