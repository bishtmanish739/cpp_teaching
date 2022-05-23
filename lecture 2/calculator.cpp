#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;

}
int subtract(int a,int b){
    return a-b;

}
int product(int a,int b){
    return a*b;


}

int divide (int a,int b){
    return a/b;

}
int main(){
    while(true){
            int a,b;
            char ch;
        cout<<"Perform your operation"<<endl;
        cin>>a;
        cin>>ch;
        cin>>b;

        switch(ch){
        case '+':
            cout<<" sum is "<< sum(a,b)<<endl;
            break;
        case '-':
            cout<<" difference  is "<< subtract(a,b)<<endl;
            break;
         case '*':
            cout<<" product is "<< product(a,b)<<endl;
            break;

             case '/':
            cout<<" divide is "<< divide(a,b)<<endl;
            break;

             default:
               return 0;
        }


    }

return 0;
}
