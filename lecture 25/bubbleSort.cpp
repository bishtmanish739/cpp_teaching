#include<iostream>
using namespace std;
void printarray(int arr[100],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void bubble_sort(int arr[100],int n){
    for(int i=0;i<n;i++){

        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                int t=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=t;
            }
        }

       //printarray(arr,n);

    }
}
int main(){
// 5 1 4 8 2
// 1 5 4 8 2
// 1 4 5 8 2
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<" Array before sorting"<<endl;
printarray(arr,n);
bubble_sort(arr,n);
cout<<" Array after sorting"<<endl;
  printarray(arr,n);




}
