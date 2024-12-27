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
        int n , k , x ;
        cin>>n>>k>>x;
        if(x != 1 ){
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i = 0 ; i < n ; i++) cout<<1<<" ";
                cout<<endl;
            }
        else if(k == 1 || (k == 2 && n % 2 == 1)) cout<<"NO"<<endl; // x == 1 is default here , as it comes here after passing if condition
        else{
            cout<<"YES"<<endl;
            if (n % 2 == 1) {
                cout << n / 2 << endl;
                cout << 3 << " ";
                for (int i = 1; i < n / 2; ++i) {
                    cout << 2 << " ";
                }
            } else {
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; ++i) {
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }
    
    }

}