#include<iostream>
using namespace std;
void printarray(int arr[100],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void selection_sort(int arr[100],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
            // swap minindex with i
            int t=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=t;

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
selection_sort(arr,n);
cout<<" Array after sorting"<<endl;
  printarray(arr,n);




}

