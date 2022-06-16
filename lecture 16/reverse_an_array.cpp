#include<iostream>
using namespace std;

// 1 2 3 4 5 6  => 6 5 4 3 2 1
// 1 2 3 4 5 => 5 4 3 2 1
// temp -> 6 5 4 3 2 1=>
// 0-> 5
// 1-> 4
// 2-> 3
// 3-> 2
// 4-> 1
//5 -> 0
void reverse(int n,int arr[100]){
    // array are always passed by reference not pass by value
    int temp[100];
    for(int i=0;i<n;i++){
        temp[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

   /// n--;
}

void reverse1(int n,int arr[100]){
    // two pointer approach
    // array are always passed by reference not pass by value
    // 1 2 3 4 5 6  => 6 2 3 4 5 1  => 6 5 3 4 2 1 => 6 5 4 3 2 1
    int i=0;
    int j=n-1;
    while(i<j){
            int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;


    }
    return ;
}
int main(){
int n;
cin>>n;
int  arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
//reverse(n,arr);
//cout<<&arr[0];
reverse1(n,arr);
cout<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
//cout<<n<<endl;


}
