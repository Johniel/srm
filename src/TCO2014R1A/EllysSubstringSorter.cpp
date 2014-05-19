#include <algorithm>
#include <complex>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define REP(i, n) for(int i=0; i<(int)n; ++i)
#define FOR(i, c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(),(c).end()
#define each(i, c) FOR(i, c)

#define unless(cond) if (!(cond))

using namespace std;

typedef long long int lli;
typedef unsigned long long ull;
typedef complex<double> point;

class EllysSubstringSorter {
public:
  string getMin(string s, int L)
  {
    const int N = s.size();
    vector<string> v;
    for (int i = 0; i < N; ++i) {
      string a, b, c;
      for (int j = 0; j < N; ++j) {
        if (j < i) a += s[j];
        else if (i + L <= j) c += s[j];
        else b += s[j];
      }
      sort(b.begin(), b.end());
      v.push_back(a + b + c);
    }
    return *min_element(v.begin(), v.end());
  }


};





// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
