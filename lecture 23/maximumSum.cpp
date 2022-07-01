#include<iostream>
using namespace std;
// 1 2 -3 4 5
int maxsubarray(int arr[100],int n){
    int ans=INT_MIN;     // INT_MIN=  -2147483647-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

                // i se lekar j tak print karo
                // 0,0
                // 0,1
                // 0,2
                //0,3
            // cout<<i<<" "<<j<<endl;

                    int currsum=0;
                    for(int k=i;k<=j;k++){
                        currsum+=arr[k];    // currsum= currsum+ arr[k];
                    }

                    // curr sum will store sum of current subarray
                    if(currsum>ans){
                        ans=currsum;
                    }






            }

    }
    return ans;

}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<maxsubarray(arr,n)<<endl;

}
