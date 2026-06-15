#include <iostream>

using std::cin;
using std::cout;

int main(void) {
    long long n;
    if (!(cin >> n)) return 0;
    
    while (true) {
        cout << n;
        if (n == 1) {
            break;
        }
        cout << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << "\n";
    return 0;
}