// Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
// $$ 3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$
// Your task is to simulate the execution of the algorithm for a given value of n.
// Input
// The only input line contains an integer n.
// Output
// Print a line that contains all values of n during the algorithm.
// Constraints

//  1 \le n \le 10^6

#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    long long n;
    std::cin >> n;
    
    std::vector<long long> sequence;
    sequence.reserve(100);  // Pre-allocate some space to avoid frequent reallocations
    
    while (n != 1) {
        sequence.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    sequence.push_back(1);
    
    for (size_t i = 0; i < sequence.size(); ++i) {
        std::cout << sequence[i];
        if (i < sequence.size() - 1) {
            std::cout << ' ';
        }
    }
    std::cout << '\n';
    
    return 0;
}

