#include<iostream>
using namespace std;
int main(){
int arr[100],n;
cout<<"enter the length of array"<<endl;
cin>>n;
cout<<"enter the element of array"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];   //1 2 3 1 1 3
}
int c=0;
for(int i=0; i<n; i++){
    for(int j=i+1;j<n; j++){
            // j> i
        if(arr[i]==arr[j]){
            c++;
        }
    }


} cout<<"good pair in this array is"<<c<<endl;
 }
