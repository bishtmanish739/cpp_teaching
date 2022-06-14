#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int index,element;
cin>>index>>element;
cout<<" Array before inserting"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
/*
n=6
1 2 3 4 5 6
3 15*/
for(int i=n-1;i>=index;i--){
    arr[i+1]=arr[i];
}
arr[index]=element;
cout<<" Array after inserting"<<endl;
for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}




}
