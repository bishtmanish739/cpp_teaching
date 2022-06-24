#include<iostream>
#include<string>
using namespace std;
//getline(a,b,delimiter)
int main(){
    /*

   string firstname;
   cin>>firstname;

   string lastname;
   cin>>lastname;
   cout<<firstname<<" "<<lastname<<endl; */
   // enter => \n
   //n= name.length();
   string name;
  getline(cin,name,'\n'); // first parameter is cin, second parameter is string and third parameter is delimiter

  cout<<name<<endl;

   char name1[25];
    cin.get(name1, 25);
    cout << name1;

}
