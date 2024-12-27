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
    freopen("output2.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;

        bool zero = false , five = false ;
        int f = 0 , ans = 100 , z = 0;
        while(true){    
            // check last digit
            int last = n % 10;
            n /= 10;
            if(five && (last == 2 || last == 7)){
                ans = min(ans , f);
                cout<<ans<<endl;
                break;
            }
            if(zero && (last == 0 || last == 5)){
                ans = min(ans , z);
                cout<<ans<<endl;
                break;
            }

            if(!five && last == 5){
                five = true;

            }
            else{
                f++;
            }
            if(!zero && last == 0){
                zero = true;
            }
            else{
                z++;
            }

        }    
    
    }

}