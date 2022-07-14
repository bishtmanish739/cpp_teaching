#include<iostream>
#include<vector>
using namespace std;
int main(){
    // row major form formula p=( r* n )+ c
     // where n is number of element in each row r is current row number and c is current column
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }


     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
