#include<iostream>
using namespace std;
int main(){

// 1 2 31 4 20  100 101
// 1 2 31 31 31 100 101
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int left[100];
int largest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
    left[i]=largest;
}
for(int i=0;i<n;i++){
    cout<<left[i]<<" ";
}5
}

