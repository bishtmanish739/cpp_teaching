// observation 1=> printing order row,column ,row,column
// observation 2=> startingrow,endingcol,endingrow,startingcol
// observation 3=> total element to be printed row * col
#include<iostream>
#include<vector>
using namespace std;
int main(){
/*
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

*/
    int arr[100][100];
    int row,column;
    cin>>row>>column;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> ans;
    // total element to be print
    int total= row * column;
    int startingrow=0;
    int endingcol=column-1;
    int endingrow=row-1;
    int startingcol=0;
    // initially zero element printed
    int count=0;
   while(count<total){
        // step 1 => print starting row from starting col to ending col
        for(int i=startingcol;i<=endingcol;i++){
            ans.push_back(arr[startingrow][i]);
            count++;
        }
        if(count==total){
         break;
       }
        startingrow++;
        // step 2=> print endingcol from starting row to ending row
        for(int i=startingrow;i<=endingrow;i++){
               ans.push_back(arr[i][endingcol]);
            count++;
        }
        if(count==total){
         break;
       }
        endingcol--;
        // step => 3 print ending row from ending col to starting col
        for(int i=endingcol;i>=startingcol;i--){
            ans.push_back(arr[endingrow][i]);
            count++;
        }
        if(count==total){
         break;
       }
        endingrow--;

        //step=4  print starting col from eding row to starting row
          for(int i=endingrow;i>=startingrow;i--){
            ans.push_back(arr[i][startingcol]);
            count++;
        }
        if(count==total){
         break;
       }
        startingcol++;

   }
// printing vector
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



}

