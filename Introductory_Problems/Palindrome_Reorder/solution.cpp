#include <array>
#include <iostream>
#include <string>
using std::array;
using std::cin;
using std::cout;
using std::string;

class Solver {
private:
  string str;
  array<int, 26> alpha{};

  void solution(const array<int, 26> a, const string s) {
    int odd = 0;
    char mid = 0;
    for (int i = 0; i < 26; i++) {
      if (a[i] & 1) {
        // 个数为奇数
        odd++;
        mid = 'A' + i; // 中间字母
      }
    }
    if (odd > 1) {
      cout << "NO SOLUTION" << std::endl;
      return;
    }

    string left, right;
    for (int i = 0; i < 26; i++) {
      string half(a[i] / 2, 'A' + i);
      left += half;
      right = half + right;
    }
    cout << left << (odd ? string(1, mid) : "") << right << std::endl;
  }

public:
  explicit Solver(string s) : str(s) {
    // 统计字符串中各个字母的出现次数
    for (char c : str)
      alpha[c - 'A']++;

    solution(alpha, str);
  }
};

int main(void) {
  string s;
  cin >> s;
  Solver sol(s);
  return 0;
}