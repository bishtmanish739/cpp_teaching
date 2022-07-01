#include<iostream>
using namespace std;
int kadane(int arr[100],int n){
    // 1 1 -3 100 -5  10
// 5 =>sum of all the element
int sum=INT_MIN;
int currsum=0;
for(int i=0;i<n;i++){
    currsum= currsum+ arr[i];  // currsum=105
    if(currsum> sum){
        sum= currsum;  // sum =105;
    }
    if(currsum<0){
        currsum=0;
    }
}
return sum;

}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<kadane(arr,n)<<endl;
}
