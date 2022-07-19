// this program contain 4 different diagonal traversal

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
}

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
int    i=0,j=col-1;
  while( i<row&&j>=0){
    sum=sum+arr[i][j];
    i++;
    j--;
  }
    cout<<sum<<endl;
}

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
int    i=row-1,j=0;
  while( i>=0&&j<row){
    sum=sum+arr[i][j];
    i--;
    j++;
  }
    cout<<sum<<endl;
}

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
int    i=row,j=col-1;
  while( i>=0&&j>=0){
    sum=sum+arr[i][j];
    i--;
    j--;
  }
    cout<<sum<<endl;
}


