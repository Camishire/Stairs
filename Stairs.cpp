#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) cout << 1;
    else if (n == 2) cout << 2;
    else if (n == 3) cout << 4;
    else {
        long long t1 = 1;
        long long t2 = 2;
        long long t3 = 4;
        long long next = 0;

        for (long long i = 4; i <= n; i++) {
            next = t1 + t2 + t3;
            t1 = t2;
            t2 = t3;
            t3 = next;
        }

        cout << next;
    }
    
    return 0;
}