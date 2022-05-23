#include<iostream>
using namespace std;
int main(){
int row=1,column=1;
while(row<=5){
        column=1;
    while(column<=row){
        cout<<"*";
        column++;
    }


    cout<<endl;

    row++;
}

cout<<"----->"<<endl;
for(int i=1;i<=5;i++){

    for(int j=1;j<=i;j++){
        cout<<"*";

    }
    cout<<endl;

}

}
