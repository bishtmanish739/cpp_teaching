// 1 2 3 4 5 => 5 1 2 3 4 => 4 5 1 2 3
#include<iostream>
using namespace std;
void rotateArray(int n,int arr[100]){
    int temp[100];
    for(int i=0;i<n;i++){
        temp[(i+1)%n]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    return ;

}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotateArray(n,arr);
    cout<<"Array after 1 rotation"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
