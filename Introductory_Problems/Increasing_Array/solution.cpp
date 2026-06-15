#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using ll = long long;

class Solute {
private:
  std::vector<ll> sequence;

  void count_steps(std::vector<ll> &a) {
    ll step = 0;
    for (size_t i = 1; i < a.size(); i++) {
      if (a[i] >= a[i - 1]) {
        continue;
      } else {
        step += (a[i - 1] - a[i]);
        a[i] = a[i - 1];
      }
    }
    cout << step;
  }

public:
  Solute(ll con) {
    ll element;
    for (size_t i = 0; i < con; i++) {
      cin >> element;
      sequence.push_back(element);
    }
    count_steps(sequence);
  }
};

int main(void) {
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll count_of_num;
  cin >> count_of_num;
  Solute slt(count_of_num);
  return 0;
}