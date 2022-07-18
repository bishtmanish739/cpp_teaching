
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
            if(i==j){
                  sum+=arr[j][i];
            }

        }
       // ans.push_back(sum);
       //sum=0;
    }
    cout<<sum<<endl;
    int i=0;
    int j=0;
    sum=0;
    // row==culumn
    while(i<row && j<column){
        sum+= arr[i][j];
        i++;
        j++;

    }
    cout<<sum<<endl;






}



