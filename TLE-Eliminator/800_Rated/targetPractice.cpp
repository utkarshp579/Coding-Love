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
        char arr[11][11]; 
        int ans = 0; 
        for(int i=1; i<11; i++){
            for(int j=1; j<11; j++){
                cin>>arr[i][j];
                if(arr[i][j] == 'X'){
                    int a = i, b = j;
                    if(i > 5) {
                        a = 11 - i; 
                    }
                    if(j > 5) {
                        b = 11 - j; 
                    }
                    ans += min(a,b);
                }
            }
        } 
        cout<< ans<<endl; 
    
    }

}