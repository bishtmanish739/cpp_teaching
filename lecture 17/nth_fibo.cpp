using namespace std;
int main(){
int arr[100], n;
cin>>n; // 0 1 1  2 3 5 8 13
arr[0]=0, arr[1]=1;
for(int i=2; i<=n+1; i++){
    arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<"nth fibonachi number is "<<arr[n-1]<<endl;
}
