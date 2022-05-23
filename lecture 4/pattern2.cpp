#include<iostream>
using namespace std;
/*


* * * * *
* * * *
* * *
* *
*
r=1 , star= 5
r= 2 star= 4
r= 3 star=3
.
,
.


*/

int main(){
    int row=1,star=1;
     int i=0;
     cout<<" method 1"<<endl;
    while(row<=5){
        star=1;

        while(star<=5-i){
                cout<<"* ";
                star++;

        }
         cout<<endl;
          i++;

        row++;

    }


    cout<<" method 2 \n"<<endl;
    row=1;
    star=1;

    while(row<=5){
        star=1;

        while(star<=5-row+1){
                cout<<"* ";
                star++;

        }
         cout<<endl;


        row++;

    }

    cout<<" method 3 using for loop \n"<<endl;

    for(int row=0;row<5;row++){
        for(int star=0;star<5-row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }



}
