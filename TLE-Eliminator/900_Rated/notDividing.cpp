// Also I have to submit in cpp 17 format.
// Greedy : - if a is divisible by i , then a + 1 will not divisible by i , except i == 1.

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
    freopen("output2.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int pre = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            int temp ;
            cin >> temp;
            if(temp == 1) temp = 2;
            if(temp % pre == 0){
                temp++;
                
                
            }
            pre = temp;
            cout<<temp<<" ";
        } 
        cout<<endl;  
    
    }

}