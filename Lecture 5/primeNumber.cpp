#include<iostream>
using namespace std;

// bool is a data type which store true or false value
int root(int num){
    int r=1;
    while((r* r )<num){
            r++;

    }
    return r;
}

//method 1
bool isPrime1(int num){

    for(int i=2;i<num; i++){
        if( num%i == 0){
            return false;
        }

    }
    return true;



}
//method =>2
bool isPrime2(int num){

    for(int i=2;i<=num/2; i++){
        if( num%i == 0){
            return false;
        }

    }
    return true;



}


//method =>3


bool isPrime3(int num){
  int r= root(num);
    for(int i=2;i<=r; i++){
        if( num%i == 0){
            return false;
        }

    }
    return true;



}

int main(){


    int num;
    cout<<" Enter A number"<<endl;
    cin>>num;


    bool check = isPrime1(num);
    if(check==false){
        cout<<"Given number is non prime method 1"<<endl;
    }
    else{
         cout<<"Given number is prime method 1"<<endl;
    }


   check = isPrime2(num);
    if(check==false){
        cout<<"Given number is non prime method 2 "<<endl;
    }
    else{
         cout<<"Given number is prime method 2"<<endl;
    }

    check = isPrime3(num);
    if(check==false){
        cout<<"Given number is non prime method 3"<<endl;
    }
    else{
         cout<<"Given number is prime method 3 "<<endl;
    }




return 0;
}
