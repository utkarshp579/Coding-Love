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

    int k ;
    cin>>k;
    while(k--){
        string s , t;
        cin>>s>>t;

        int arr[26] = {0};
        bool flag = false;
        for(char c : s) arr[c - 'A']++;
        for(char c : t) {
            arr[c - 'A']--;
            if(arr[c - 'A'] < 0) {
                cout<<"NO"<<endl;
                flag = true;
                break;
            } // If the character is not in string t, it's not needed anymore.
        }  
        if(flag) continue;

        int n = s.size() , m = t.size();
        for(int i = 0 ; i < n ;i++){
            if(arr[s[i] - 'A']){
                arr[s[i] - 'A']--;
                s[i] = '#';
            } 
        } 
        
        // checking order
        int i = 0 , j = 0;
        while(j < t.size()){
            if(t[j] == s[i]) i++ , j++;
            else if(s[i] == '#') i++;
            else {
                cout<<"NO"<<endl;
                flag = true;
                break;
            }
        }

        if(!flag)cout<<"YES"<<endl;
        
    
    }

}