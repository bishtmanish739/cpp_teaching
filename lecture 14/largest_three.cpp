#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first=-1;
    int second=-2;
    int third=-3;

    // 5 4 3 2 1
    // new > first> second>third
    ////  first>new> second>third
      ////  first> second>new>third
        ////  first>second>third > new
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
       else if(arr[i]>second){
        third=second;
        second=arr[i];
       }
        else if(arr[i]>third){
        third=arr[i];

       }
       // cout<<"largest 3 number are "<<first<<" "<<second<<" "<<third<<endl;
    }
    cout<<"largest 3 number are "<<first<<" "<<second<<" "<<third<<endl;

}
