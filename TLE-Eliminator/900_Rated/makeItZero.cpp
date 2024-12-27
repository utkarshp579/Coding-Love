// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve( int n){

    if(n % 2 == 0){

        cout<<2<<endl;

        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;

    }
    else{

        cout<<4<<endl;

        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n - 1<<endl;
        cout<<n - 1<<" "<<n<<endl;
        cout<<n - 1<<" "<<n<<endl;

    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;

    while(t--){
        int n ;
        cin>>n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin>>arr[i];

        }    

        solve( n);
    
    }

}