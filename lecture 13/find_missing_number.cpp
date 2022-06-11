#include<iostream>
using namespace std;
int main(){
    int length;
    cin>>length;
    int arr[100];

    //10 8 9 7 6 5 2 1 4

   for(int i=0;i<length-1;i++){
    cin>>arr[i];
   }
   int freq[100]={0};
   for(int i=0;i<length-1;i++){
        int curr=arr[i];
    freq[curr]++;
   }
   // approach 1
   for(int i=1;i<=length;i++){
        if(freq[i]==0){
            cout<<"Missing number using approach 1 is "<<i<<endl;
            break;
        }


   }
   //approach 2
   // sum of n natural number - sum of array = missing number;

   int total= length* (length+1)/2;
   int sum=0;
   for(int i=0;i<length-1;i++){
    sum+=arr[i];
   }
   cout<<"Missing number using approach 2 is "<<total-sum<<endl;










}

