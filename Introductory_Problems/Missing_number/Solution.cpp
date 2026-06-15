#include <iostream>
using std::cin;
using std::cout;
using ll = long long;

class Solute {
private:
  ll sum_sequence;
  ll count_of_num;

public:
  Solute(ll n) : sum_sequence(n * (1 + n) / 2), count_of_num(n - 1) {
    ll sum_except_one = 0;
    ll a;
    for (ll i = 0; i < count_of_num; i++) {
      cin >> a;
      sum_except_one += a;
    }
    cout << sum_sequence - sum_except_one;
  }
};

int main(void) { ll n;
  cin >> n;
  Solute slt(n);
  return 0;
}