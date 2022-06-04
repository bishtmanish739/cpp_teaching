
#include<iostream>
using namespace std;
int sumOfArray(int length,int arr[1000]){
    int sum=0;
     for(int i=0;i<length;i++){
        sum+=arr[i];
            // a+=1 ==> a=a+1;
          // sum+=arr[i]    ==> sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int length;

    cout<<"enter length of array"<<endl;
     cin>>length;

    int arr[1000];
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    int sum= sumOfArray(length,arr);
    cout<<"sum of array is "<<sum<<endl;





}

