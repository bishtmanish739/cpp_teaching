#include<iostream>
using namespace std;
// condition for binary search
// array should be sorted in ascending or descending order
// 1 2 3 4 6 10 15 20
// low=4 high =7 mid= 5
// low=4 high=mid-1; high=4;  mid=4; low> high
bool binary_search(int arr[100],int n, int element){
   // cout<<arr<<endl;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid= (low+high )/2;
        if(arr[mid]==element){
            return true;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
         else if(arr[mid]>element){
            high=mid-1;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
    bool isPresent= binary_search(arr,n,element);
    // if( isPresent){
   // }
    if(isPresent==true){
        cout<<"Element is present in this array"<<endl;
    }
    else{
          cout<<"Element is not present in this array"<<endl;
    }

}
