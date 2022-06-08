#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter lenght of array"<<endl;
    int arr[100];
    cin>>length;

    cout<<"Enter element of array element should be in between 1 to 10"<<endl;
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    cout<<"Method 1"<<endl;
// brute force approach
    for(int i=1;i<=100;i++){
        int count=0;
        for(int j=0;j<length;j++){
            if(arr[j]==i){
                count++;
            }
        }
        cout<<i<<"-->"<<count<<endl;

    }

    cout<<"Method 2"<<endl;
    // 1 2 1 2 50 55 50 1 2 1
    int freq[100];
    for(int i=0;i<100;i++){
        freq[i]=0;
    }

    for(int i=0;i<length;i++){

        int currvalue= arr[i];

        freq[currvalue]++;



    }
    for(int i=0;i<100;i++){
        if(freq[i]>0){
            cout<<i<<" "<<freq[i]<<endl;
        }
    }



}
