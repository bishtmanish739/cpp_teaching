#include<iostream>
using namespace std;
int main(){

    //12
    //  0 1 0 2 1 0 1 3 2 1 2 1
    int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>> arr[i];
}
//
int right[100];
int largest=INT_MIN;
for(int i=n-1;i>=0;i--){
    if(arr[i]>largest){
        largest=arr[i];
    }
    right[i]=largest;
}
/*
for(int i=0;i<n;i++){
    cout<<right[i]<<" ";
}
cout<<endl;*/
int left[100];
 largest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
    left[i]=largest;
}
/*
for(int i=0;i<n;i++){
    cout<<left[i]<<" ";
}
cout<<endl;
*/

int totalWaterTrapped=0;
for(int i=0;i<n;i++){
        // min(a,b) //


    int minn= min(left[i],right[i]);  //max(a,b)
    totalWaterTrapped= totalWaterTrapped +(minn- arr[i]);

}
cout<<totalWaterTrapped<<endl;

}
