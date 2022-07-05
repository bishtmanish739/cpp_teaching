/// 1 1 2 2 2 3 3 3 3 4 5 5 5 5 5 7  => 1000   ==>//9 -6 +1
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
int last_occ(int n,int element,int arr[100]){
    // 1 2 2 3 3 3 5 5 5 6 6 8 8 8
    int low=0, high= n-1;
    int res=-1;
while(low<=high){
  int  mid=(low+high)/2;
    if(arr[mid]==element){
            res=mid;
        low=mid+1;
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
    int k;
    cin>>k;
    int f=first_occ(n,k,arr);
     int l=last_occ(n,k,arr);
    if( f==-1 || l==-1){
          cout<<"freq of " << k <<" in this array is " <<0<<endl;
          return 0;
    }

     cout<<"freq of " << k <<" in this array is " << l-f+ 1<<endl;


}

