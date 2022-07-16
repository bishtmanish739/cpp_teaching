#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<vector<int> > v(3);
    for(int i=0;i<3;i++){
        vector<int> arr(3,0);

        for(int j=0;j<3;j++){
                    cin>>arr[j];
                }
        v[i]=arr;

    }
   // vector<int> abc=v[0];
   // n= abc.size();
    int column= v[0].size();
    int row=v.size();
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}
