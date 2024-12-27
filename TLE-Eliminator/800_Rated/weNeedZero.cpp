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
// hint consider odd and even length distinctly
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int temp;
        int xorr = 0;
        for (int i = 0; i < n; i++){
            cin>>temp;
            xorr ^= temp;
        }    

        if(n %2 == 1){// odd length
            cout<<xorr<<endl;

        }
        else{
            if(xorr == 0){
                cout<<0<<endl;// any num could be printed , as xor to self by even times is 0.
            }else{
                cout<<-1<<endl;
            }
        }
    
    }

}