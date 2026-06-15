#include <iostream>
using ll = long long;

void Solve(ll n) {
  if (n == 1) {
    std::cout << 1;
  }
  if (n == 2 || n == 3) {
    std::cout << "NO SOLUTION";
  }
  if (n == 4) {
    std::cout << "2 4 1 3";
  }
  if (n > 4) {
    for (ll i = 1; i <= n; i += 2) {
      std::cout << i << " ";
    }
    for (ll j = 2; j <= n; j += 2) {
      std::cout << j << " ";
    }
  }
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  ll num;
  std::cin >> num;
  Solve(num);
  return 0;
}