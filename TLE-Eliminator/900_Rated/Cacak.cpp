// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
double solve( int n){
    // if(n % 2 == 0){
    //     return ((n / 2)*1.0) * (n + 1);
    // }
    // return n * ((n + 1)*1.0 / 2);
    // double solve(int n) {
    return (static_cast<double>(n) * (n + 1)) / 2;//This function avoids integer overflow by converting n to a double before performing the multiplication.
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // cout<<"he";
    int t ;
    cin>>t;
    while(t--){
        double n , k , x ;
        cin>>n>>k>>x;
        // cout<<"he";
        // int arr[n];
        // for (int i = 0; i < n; i++) cin>>arr[i];    
        double upperMax = solve(n) - solve(n - k);
        double lowerMin = solve(k); // notpos is minimum possible
        // cout<<total<<" "<<notPos<<endl;
        if( x <= upperMax && x >= lowerMin ) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        // cout<<endl;
    }

}