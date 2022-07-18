#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[100][100];
    int row,column;
    cin>>row>>column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> ans;
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            sum+=arr[i][j];
        }
        ans.push_back(sum);
        sum=0;
    }


    int n= ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }





}

