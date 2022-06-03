#include<iostream>
using namespace std;
/*

a
b c
d e f
g h i j
k l m n o

1
2 3
4 5 6
7 8 9 10


*/
int main(){
    char ch='a';
    for(int row=0;row<5;row++){

        for(int i=0;i<=row;i++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

    int num=1;
    for(int row=0;row<4;row++){

        for(int i=0;i<=row;i++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

}
