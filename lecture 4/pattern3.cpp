#include<iostream>
using namespace std;

/*


1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

 row =1  , print 1=> 1
 row =2  print 2 => 2
 row =3  print 3 => 3
 .
 .


    */
int main(){

    int row =1 ;
    while(row <=5){
        int printcount=1;
        while(printcount<=row){
            cout<<row<<" ";
            printcount++;
        }
        cout<<endl;
        row++;


    }


    cout<<"method 2    "<<endl;
    for(row=1;row<=5;row++){
        for(int printcount=1;printcount<=row;printcount++){
            cout<<row<<" ";
        }
        cout<<endl;


    }




return 0;

}
