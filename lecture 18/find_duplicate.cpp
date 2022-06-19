#include<iostream>
using namespace std;
int main(){
int arr[100],n, total, sum;
cout<<"enter the length of array"<<endl;
cin>>n;
for(int i=0; i<n; i++){
cin>>arr[i];
}    // 1 2 3 4 5 5
for(int i=0; i<n; i++){
         sum =n*(n-1)/2;

}
for (int i=0; i<n;i++){
total= total+arr[i];
}
cout<<"dupligate number is"<<total-sum<<endl;
 }
