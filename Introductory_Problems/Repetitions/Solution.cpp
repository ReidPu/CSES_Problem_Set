#include <algorithm>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using ll = long long;

class Solute {
private:
  string DNA;

  void longest_repetition(const string &s) {
    ll max_len = 1;
    ll curr_len = 1;
    for (size_t i = 1; i < s.length(); i++) {
      if (s[i] == s[i - 1]) {
        // match: increment curr_len counter
        curr_len++;
      } else {
        // differ: the repetition has broken. reset curr_len = 1
        curr_len = 1;
      }
      max_len = std::max(curr_len, max_len);
    }
    cout << max_len;
  }

public:
  Solute() {
    cin >> DNA;
    longest_repetition(DNA);
  }
};

int main(void) {
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  Solute slt;
  return 0;
}