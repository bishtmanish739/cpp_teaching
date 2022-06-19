#include<iostream>
using namespace std;
bool palindrom(int n, int arr[100]){


    int temp[100];
    for(int i=0; i<n; i++){
    temp[i]=arr[n-1-i];
    }
    // 1 2 1 2 2 1 2 1 => 1 2 1 2 2 1 2 1
//4 => 1 3 2 1
//1 2 3 4 => 4 3 2 1
    for(int i=0; i<n; i++){
        if(temp[i]!=arr[i]){
            return false;
        }
    }return true;
}
bool palindrom1(int n,int arr[100]){
    int i=0,j=n-1;
    while(i<j){
       if(arr[i]!=arr[j]){
            return false;
       }
         i++;
        j--;

    }
    return true;
}
int main(){
    int arr[100], n;
    cout<<"enter the length of array"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool check= palindrom1(n, arr);
        if (check==true){
            cout<<"number is palindrom"<<endl;
        }
        else{
            cout<<"number is not palindrome"<<endl;
        }
}
