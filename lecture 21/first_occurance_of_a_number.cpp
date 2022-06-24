#include<iostream>
using namespace std;
int first_occ(int n,int element,int arr[100]){
    // 1 2 2 3 3 3 5 5 5 6 6 8 8 8
    int low=0, high= n-1;
    int res=-1;
while(low<=high){
  int  mid=(low+high)/2;
    if(arr[mid]==element){
            res=mid;
        high=mid-1;
       // cout<<mid<<endl;
        //break;
    }
    else if(arr[mid]>element){
high= mid-1;}
else if(arr[mid]<element){
    low=mid+1;
}

 }
 return res;


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
    cout<<first_occ(n,element,arr)<<endl;

}
