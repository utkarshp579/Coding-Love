#include<iostream>
using namespace std;

// xor never exceed the larger number.
int main() {
    int n;
    cin >> n;
    int xorr1 = 0 , xorr2 = 0;
    for (int i = 0; i < n - 1; i++) {
        int temp2;
        cin >> temp2;
        xorr1 ^= temp2;
        xorr2 ^= (i + 1);
    }

    xorr2 ^= n;

    // long long int sum = n * (n + 1) / 2; // formula: 1 + 2 + ... + n = n*(n+1)/2
    cout << (xorr1 ^ xorr2 )<< endl;
    return 0;
}
