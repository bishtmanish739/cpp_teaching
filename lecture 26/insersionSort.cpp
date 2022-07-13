#include<iostream>
using namespace std;
void printarray(int arr[100],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void insersion_sort(int arr[100],int n){
    // 1 2 3 5 4  =>
        int i, key, j;
            for (i = 1; i < n; i++)
            {
                key = arr[i];
                j = i - 1;
                while (j >= 0 && arr[j] > key)  // both condition should be true to execute this loop   // true && true = true
                {
                    arr[j + 1] = arr[j];
                    j = j - 1;
                }
                arr[j + 1] = key;
                //printarray(arr,n);
            }
}
int main(){
// 5 1 4 8 2

int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<" Array before sorting"<<endl;
printarray(arr,n);
insersion_sort(arr,n);
cout<<" Array after sorting"<<endl;
  printarray(arr,n);




}
