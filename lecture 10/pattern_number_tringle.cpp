#include<iostream>
using namespace std;
int main(){
    int space=10;
    int middle=1;

    for(int row=1;row<=5;row++){
            for(int i=0;i<space;i++){
                cout<<" ";
            }
            for(int j=row;j<=middle-1;j++){
                cout<<j<<" ";
            }
            cout<<middle<<" ";
            for(int j=middle-1;j>=row;j--){
                cout<<j<<" ";
            }
            cout<<endl;
        space-=2;
        middle+=2;
    }
}
