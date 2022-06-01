/*

        *
       * *
      * * *
     * * * *
    * * * * *

    // s+sapce=1, space=4
    // 2, space=3
    // 3, 2
    //4 , 1
    // 5,0

    // star+ space= 5;

*/

#include<iostream>
using namespace std;

int main(){
    for(int row =1;row<=5 ;row++){
            // row == star
            int space=5-row;
            while(space>0){
                cout<<" ";
                space--;
            }
            for(int star=0;star<row;star++){
                cout<<"* ";
            }
            cout<<endl;



    }
    cout<<endl;

    // using while loop
    int row=1;
    while(row<=5){
            int space=5-row;
            while(space>0){
                    cout<<" ";
                space--;
            }
            int star=0;
            while(star<row){
                cout<<"* ";
                star++;
            }
            cout<<endl;
        row++;
    }

}
