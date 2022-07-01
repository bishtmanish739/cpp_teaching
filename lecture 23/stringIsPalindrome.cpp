#include<iostream>
using namespace std;
bool reverse(int n, string s){
    int i=0, j=n-1;
 while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;

 }
 return true;
 }
int main(){
string s;
cin>>s;
int n=s.length();
for(int i=0; i<n; i++){
    cout<<s[i]<<" ";
}
bool c= reverse(n,s);
if(c==false){
    cout<<"string is not palindrom"<<endl;
}
else{
    cout<<"string is palindrom"<<endl;
}
 }
