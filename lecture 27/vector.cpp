#include<iostream>
#include<vector>
using namespace std;
int main(){
   // vector is a dynamic array
    vector<int> v;
    v.push_back(1);  //4
     v.push_back(2); //8
      v.push_back(4); //16
      v.push_back(80); //16
      v.push_back(91); //32


      /*
      for(int i=0;i<25;i++){
        int a;
        cin>>a;
        v.push_back(a);
      }*/

      int n= v.size();
      for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
      }

      // fixed size vector
      vector<int > arr(10);  // int arr[10]
      for(int i=0;i<10;i++){
        cin>>arr[i];
      }



}
