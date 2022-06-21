#include<iostream>
#include<string>
using namespace std;
int main(){
    // string is pre defined character array
    // string_name.length() is used to find length of string
    // 10^9 int
    // 10^9 -> 10^12 - long int
    // 10^12 -> 10^15 - long long int
    // >0-10^15 -> unsigned int
    string s;
    cin>>s;
    cout<<s<<endl;
    int n= s.length();
    cout<<n<<endl;
    for(int i=0;i<=n;i++){
        cout<<s[i];
    }
  //  cout<<"m"<<endl;

}
