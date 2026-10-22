#include <iostream>
#include <memory>
#include <string>
#include <vector>
using ll = long long;
using std::string;

ll Solve(ll n) {
  ll ans = 0;
  for (ll p = 5; p <= n; p *= 5) {
    ans += n / p;
  }
  return ans;
}

int main(void) {
  ll n;
  std::cin >> n;
  std::cout << Solve(n) << std::endl;
  return 0;
}
