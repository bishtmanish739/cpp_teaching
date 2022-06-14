#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
// 0 1 2 0 1 2 0 1 2 1 1 2 2 1 0
//0 0 0 0 1 1 1 1 1 1 2 2 2 2 2
// 0->4
//1-> 6
// 2-> 5

int arr[100]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<" Array before sorting"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int freq[10]={0};
for(int i=0;i<n;i++){
    int c=arr[i];
    freq[c]++;
}
// 0 -> 4
// 1-> 6
// 2-> 5
int k=0;
for(int i=0;i<3;i++){
    int currfeq=freq[i];
    for(int j=0;j<currfeq;j++){
        arr[k]=i;
        k++;
    }
}
cout<<" Value of sorting after array "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;





}
