#include<iostream>
using namespace std;
int main(){
    //  a character array is always terminate with null value

char arr[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<=n;i++){
         cout<<arr[i];
        if(arr[i]==NULL){
            cout<<n<<endl;
        }


}
cout<<endl;
 // cout print value of character array till it reaches null value
cout<<arr<<endl;

}
