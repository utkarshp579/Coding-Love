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
        int a , b , c;
        cin>>a>>b>>c;
        // even --> a , odd --> b
        long long i = c % 2 == 0 ? 0 : a++;
        if(a > b)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

}