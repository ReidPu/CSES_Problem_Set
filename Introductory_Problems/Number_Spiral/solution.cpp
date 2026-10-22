#include <algorithm>
#include <iostream>
using std::cin;
using std::cout;
using ll = long long;

class Solute {
private:
  ll num_of_test;

  ll FindNum(ll x, ll y) {
    ll temp = std::max(x, y);
    ll center_num = temp * temp - temp + 1;
    if (x == y) {
      return center_num;
    }
    if (temp % 2 == 0) {
      if (x > y) {
        return center_num + x - y;
      } else {
        return center_num - y + x;
      }
    } else {
      if (x > y) {
        return center_num - x + y;
      } else {
        return center_num + y - x;
      }
    }
  }

public:
  Solute(ll n) : num_of_test(n) {
    ll x, y;
    for (ll i = 0; i < num_of_test; i++) {
      cin >> x >> y;
      cout << FindNum(x, y) << "\n";
    }
  }
};

int main(void) {
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin >> n;
  Solute slt(n);
  return 0;
}