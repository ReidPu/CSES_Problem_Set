#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using ll = long long;

static void print_set(const std::set<int> &s) {
  cout << s.size() << endl;
  for (std::set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << ((it == s.begin()) ? "" : " ") << *it;
  }
  cout << endl;
}

static ll get_sum(ll N) { return N * (N + 1) / 2; }

class Solute {
private:
  ll N;
  ll target; // S/2
  std::set<int> set_1;
  std::set<int> set_2;

public:
  Solute(ll n, ll t) : N(n), target(t) {}

  void get_sets() {
    ll current_num = N;
    ll remain_num = target;
    while (current_num > 0) {
      if (current_num <= remain_num) {
        set_1.insert(current_num);
        remain_num -= current_num;
      } else {
        set_2.insert(current_num);
      }
      current_num--;
        }
    print_set(set_1);
    print_set(set_2);
  }
};

int main(void) {
  ll n;
  ll s;
  cin >> n;
  s = get_sum(n);
  if (s % 2 == 0) {
    ll t = s / 2;
    Solute slt(n, t);
    cout << "YES" << endl;
    slt.get_sets();
  } else {
    cout << "NO" << endl;
  }

  return 0;
}