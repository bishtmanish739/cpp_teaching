#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int right[100];
int largest=INT_MIN;
for(int i=n-1;i>=0;i--){
    if(arr[i]>largest){
        largest=arr[i];
    }
    right[i]=largest;
}
for(int i=0;i<n;i++){
    cout<<right[i]<<" ";
}
}
