#include<iostream>
#include<string>
using namespace std;


int main(){
    string firstname="Manish";
    string surname="Bisht";
    cout<<firstname.length()<<endl;
    // single   quote is used for character whereas double quote denote string
    char ch=' ';
    firstname=firstname+ch;
    //firstname+=ch;  // firstname=firstname+ch
   // firstname.push_back(ch);
    cout<<firstname<<endl;
     cout<<firstname.length()<<endl;

    string name=firstname+surname;
    //cin>>name;

   cout<<name<<endl;
    firstname=firstname+surname;
   cout<<firstname<<endl;


   //


}
