#include <iostream>
using namespace std;

int main() {
    int prev = 0, cur = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Fibonacci Series: " << prev << ", " << cur << ", ";
    nextTerm = prev + cur;
    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        prev = cur;
        cur = nextTerm;
        nextTerm = prev + cur;
    }
    return 0;
}