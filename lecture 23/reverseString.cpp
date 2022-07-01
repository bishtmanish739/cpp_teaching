#include<iostream>
#include<string>
using namespace std;
void reverse(int n, string s){
    int i=0,j=n-1;
while(i<j) {
    int t= s[i];
    s[i]=s[j];
    s[j]=t;
    i++;
    j--;

}
cout<<"string after swap"<<" =====>>>";
for( int i=0; i<n; i++){
    cout<<s[i]<<" ";
}
}
int main(){
    // string is pre defined character array
    // string_name.length() is used to find length of string
    // 10^9 int
    // 10^9 -> 10^12 - long int
    // 10^12 -> 10^15 - long long int
    // >0-10^15 -> unsigned int
    string s;
    cin>>s;
    int n= s.length();

    cout<<"array before swap"<< " =======>>>>>";
    for(int i=0;i<=n;i++){
        cout<<s[i];
    }
    reverse(n,s);
  //  cout<<"m"<<endl;

}
