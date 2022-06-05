#include<iostream>
using namespace std;
int productofarr(int length, int arr[1000]){
    // 1 2 3 4 5
int product=1;
for(int i=0;i<length; i++){

 product=product*arr[i];
 //  product*=arr[i];

}
return product;
}
int main(){
int arr[1000],length;
cout<<"enter the length of array"<<endl;
cin>>length;
for(int i=0; i<length; i++){
    cin>>arr[i];
}
int product = productofarr(length, arr);
cout<<"product of array"<<product<<endl;
}
