#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
    int low=0;
    int high=n-1;
    int mid;
    bool flag=false;
    while(low<=high){
       mid= (low+high )/2;
        if(arr[mid]==element){
            cout<<"index of the element is"<<mid<<endl;
            flag=true;
            break;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
         else if(arr[mid]>element){
            high=mid-1;

}
    }

    if(flag==false){
        cout<<"-1"<<endl;
    }
    }
