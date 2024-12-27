// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n){
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int a , b ,n ;
        cin>>a>>b>>n;
        int temp;
        int sum = b - 1;
        for (int i = 0; i < n; i++) {
            cin>>temp;
            sum += min(temp , a);
        }    
        cout<<sum<<endl;
    
    }

}