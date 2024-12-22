#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  cin.ignore();
  while (0 < (n--)) {
    string s;
    getline(cin, s);

    ll g = 0;
    ll b = 0;
    for (const auto& x : s) {
      if (x == 'g' || x == 'G') ++g;
      if (x == 'b' || x == 'B') ++b;
    }

    if (g > b) {
      cout << s << " is GOOD\n";
    } else if (g < b) {
      cout << s << " is A BADDY\n";
    } else {
      cout << s << " is NEUTRAL\n";
    }
  }

  return 0;
}