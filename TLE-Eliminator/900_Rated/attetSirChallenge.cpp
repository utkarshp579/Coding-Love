#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> qu;
    for(int i = 0; i < n; i++) qu.push(i + 1);// 1 -- N

    int ans = 0;
    while(qu.size() != 1){
        int nn = qu.size();
        for(int i = 0; i < nn; i++){
            if(qu.size() == 1) break;
            if(i % 2 == 0) {
                ans+= qu.front();
                qu.pop();
            }
            else {
                qu.push(qu.front());
                qu.pop();
            }
        }
    }
    
    cout<<ans;


}