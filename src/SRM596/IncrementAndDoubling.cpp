#include <algorithm>
#include <complex>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <numeric>
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

const int inf = (1 << 28);
const int N = 1005;
const int D = 11;
int dp[D][N];

void f(void)
{
  fill(&dp[0][0], &dp[D - 1][N - 1] + 1, inf);
  dp[0][0] = 0;
  dp[0][1] = 1;
  for (int d = 0; d + 1 < D; ++d) {
    for (int n = 0; n + 1 < N; ++n) {
      if (d + 1 < D && n * 2 < N) {
        dp[d + 1][n * 2] = min(dp[d + 1][n * 2], dp[d][n] + 1);
      }
      dp[d][n + 1] = min(dp[d][n + 1], dp[d][n] + 1);
    }
  }
  return ;
}

const int M = 52;
int memo[M][D];
int rec(int n, int mx, const vector<int>& a)
{
  if (n == a.size()) return 0;
  int& ret = memo[n][mx];
  if (ret != -1) return ret;

  int mn = 1 << 28;
  for (int d = 0; d < D; ++d) {
    if (dp[d][a[n]] < inf) {
      int cost = dp[d][a[n]];
      if (d <= mx) cost -= d;
      mn = min(mn, rec(n + 1, d, a) + cost);
    }
  }

  return ret = mn;
}

class IncrementAndDoubling {
public:
  int getMin(vector <int> a)
  {
    f();
    fill(&memo[0][0], &memo[M - 1][D - 1] + 1, -1);
    return rec(0, 0, a);
  }


};





// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
