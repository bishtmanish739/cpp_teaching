#include<iostream>
using namespace std;
long long int sqare_root(long long int num){
    //1 2 3 4 5  6
    // iterative method
    long long int i=0;
    while((i*i)<=num){
        if((i*i) ==num){
            return i;
        }
        i++;
    }
    return i-1;

}
long long int root(long long int num){
    //0 -.> 25
    //mid   =12 , 12 * 12 =>  144  mid * mid > num // high =mid-1;
    long long int low=0;
    long long int high=num;
    long long int r=0;

    while(low<=high){
        long long int mid=( low+high) /2;
        if((mid* mid)==num){
            r=mid;
            break;
        }
        else if((mid*mid)>num){
            high=mid-1;
        }
         else if((mid*mid)<num){
                r=mid;
            low=mid+1;
        }
    }
    return r;

}
int main(){
    long long int num;
    cin>>num;
    // 10^14 => 10^7
    // log(10^14) = 14* log 10
    cout<<" square root of a number using method 1 =>"<<sqare_root(num)<<endl;
     cout<<" square root of a number using binary search =>"<<root(num)<<endl;
}
