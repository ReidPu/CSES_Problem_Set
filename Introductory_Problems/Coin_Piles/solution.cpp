#include <algorithm>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using ll = long long;

class Solver {
private:
  int num_of_test;

  bool empty_both_piles(ll a, ll b) {
    return (a + b) % 3 == 0 && std::max(a, b) <= 2 * std::min(a, b);
  }

  string print_result(ll a, ll b) {
    if (empty_both_piles(a, b)) {
      return "YES";
    } else {
      return "NO";
    }
  }

public:
  explicit Solver(int n) : num_of_test(n) {
    ll a, b;
    while (num_of_test > 0) {
      cin >> a >> b;
      cout << print_result(a, b) << std::endl;
      num_of_test--;
    }
  }
};

int main(void) {
  int n;
  cin >> n;
  Solver S(n);
  return 0;
}