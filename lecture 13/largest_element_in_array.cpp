#include<iostream>
using namespace std;
int main(){
    int length;
    cin>>length;
    // dynamic memory allocation in such scenerio memory allocated at the run time,
    //int * arr= new int [length];
   // static memory allocation in this case compilar use stack memory

   //int arr[10000];

   for(int i=0;i<length;i++){
    cin>>arr[i];
   }
    int maxx=-100000;
   //1 3 53 5 7 54 100 9   ==> 1 3 5 7 9 53 54 100
   for(int i=0;i<length;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
   }
   cout<<"maximum value inside array is "<<maxx<<endl;


}
