#include<iostream>
using namespace std;

// bool is a data type which store true or false value

bool isPrime(int num){

    for(int i=2;i<=num/2; i++){
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


    bool check = isPrime(num);
    if(check==false){
        cout<<"Given number is non prime"<<endl;
    }
    else{
         cout<<"Given number is prime"<<endl;
    }




return 0;
}
