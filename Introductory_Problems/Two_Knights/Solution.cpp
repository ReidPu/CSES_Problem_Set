#include <iostream>
using std::cin;
using std::cout;
using ll = long long;

class Solute {
private:
  int num_of_cases;

  ll Formula(ll k) {
    return (k * k * k * k - k * k) / 2 - 4 * k * k + 12 * k - 8;
  }

  void ValidWays(int n) {
    for (int k = 1; k <= n; k++) {
      cout << Formula(k) << "\n";
    }
  }

public:
  Solute(int n) : num_of_cases(n) { ValidWays(num_of_cases); }
};

int main(void) {
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  Solute slt(n);
  return 0;
}