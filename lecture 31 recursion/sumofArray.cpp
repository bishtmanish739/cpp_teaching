#include <iostream>
#include<vector>
using namespace std;
// 1 2 3 4 5
int sumOfArray(int arr[100],int i,int n){
    if(i==n){
        return 0;
    }
    int k=sumOfArray(arr,i+1,n); //k=0
    return  arr[i]+k;

}

int main() {
  int n;
  cin>>n;
int arr[100] ;
  for(int i=0;i<n;i++){
   cin>>arr[i];


  }
  // 1 2 3 4 5
  int i=0;
  int sum=sumOfArray(arr,i,n);
  cout<<sum<<endl;



}
