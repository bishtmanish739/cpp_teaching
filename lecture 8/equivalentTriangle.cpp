#include<iostream>
using namespace std;
/*
      *
    ***
   *****
 *******

 row=1 , 1 star   space=4
 row =2 , 3 star,  space=3
 row =3 , 5 star, space = 2
 row =4 , 7 star, space=1
 row = 5, 9 star, space=0


*/
int main(){
    for(int row=1;row<=5;row++){
            int space=5-row;
        while(space>0){
            cout<<" ";
            space--;
        }


        for(int  star= (row*2)-1;star>0;star--){
            cout<<"*";
        }
        cout<<endl;


    }
}
