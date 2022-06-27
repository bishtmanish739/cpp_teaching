// A=>1 2 3 4
//1, 12, 123, 1234, 2, 23, 234, 3, 34,4
#include<iostream>
using namespace std;
void printsubarray(int arr[100],int n){
    for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){

                // i se lekar j tak print karo
                // 0,0
                // 0,1
                // 0,2
                //0,3
            // cout<<i<<" "<<j<<endl;
                cout<<" {";

                for(int k=i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<"}" ;
            }

    }

}
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
printsubarray(arr,n);

}


