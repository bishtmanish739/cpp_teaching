#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<" Array before Swapping"<<endl;
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;


    for(int i=0;i<n;i=i+2) {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
    }

cout<<" After swapping "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
