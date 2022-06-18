#include<iostream>
using namespace std;
/// 1 2 46 7 0 9 1 49 100
bool linear_seach(int n,int element ,int arr[100]){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return true;
        }
    }
     return false;

}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<" Enter a element "<<endl;

    int element;
    cin>>element;
    bool check=linear_seach(n,element,arr);

    if(check==true){
        cout<<" Element is present in this array "<<endl;
    }
    else{
           cout<<" Element is not present in this array "<<endl;
    }


}
