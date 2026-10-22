#include <iostream>
using std::cin;
using std::cout;
using ll = long long;

constexpr ll MOD = 1e+9 + 7;

class Solution {
private:

  ll fastPow(ll base, int exp) const {
    ll result = 1;
    while (exp > 0) {
      if (exp & 1) {
        result = base * result % MOD;
      }
      base = base * base % MOD;
      exp >>= 1;
    }
    return result;
  }

  public:
    Solution(int n) {
      cout << fastPow(2, n) << std::endl;
    }
};

int main(void) {
  int n;
  cin >> n;
  Solution slt(n);
  return 0;
}
