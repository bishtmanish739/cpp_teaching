#include<iostream>
using namespace std;
/*
* * * * *
  * * * *
    * * *
      * *
        *

        row 1 => 5, 0 space
        row 2 => 4 ,1 space
        row 3 => 3, 2 space
        row 4 => 2 ,3 space
        row 5= 1, 4 space

        space+ star=5;
        space= 5-star;



*/
int main(){
    for(int row =5;row>0 ;row--){
            int space=5-row;
            while(space>0){
                cout<<" ";
                space--;
            }
            for(int star=0;star<row;star++){
                cout<<"*";
            }
            cout<<endl;



    }

}
