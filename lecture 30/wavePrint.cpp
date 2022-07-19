// observation 1=> column wise traversal
// observation 2=> top-> bottom and then bottom to top alternative
// observation 3=> top -> bottom are even index and bottom to up are odd index column
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

    for(int i=0;i<column;i++){
            // traversing left to right
            if(i%2==0 ){
                // a number is odd if its binary unit place is 1   => 9 = 1001 , 3=11 , 5=> 101
                // a number is even if its binary unit place is 0 => 2= 10, 4=100, 6= 110
                //(i&1)==false
                // print top to bottom
                for(int j=0;j<row;j++){
                        ans.push_back(arr[j][i]);

                }
            }
            else{
                // print bottom to top
                for(int j=row-1;j>=0;j--){
                    ans.push_back(arr[j][i]);
                }
            }

    }
// printing vector
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}
