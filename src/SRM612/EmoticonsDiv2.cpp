#include <bits/stdc++.h>

#define each(i, c) for (auto& i : c)
#define unless(cond) if (!(cond))

using namespace std;

typedef long long int lli;
typedef unsigned long long ull;
typedef complex<double> point;

class EmoticonsDiv2 {
public:
  int printSmiles(int smiles)
  {
    const int N = 1000 + 5;
    const int inf = 1 << 28;

    static int dp[N][N];
    fill(&dp[0][0], &dp[N - 1][N - 1] + 1, inf);
    dp[1][0] = 0;

    for (int i = 0; i < N; ++i) {
      for (int j = 0; j < N; ++j) {
        if (j < i) {
          dp[i][i] = min(dp[i][i], dp[i][j] + 1);
        }
        if (i + j < N) {
          dp[i + j][j] = min(dp[i + j][j], dp[i][j] + 1);
        }
      }
    }

    int mn = inf;
    for (int i = 0; i < N; ++i) {
      mn = min(mn, dp[smiles][i]);
    }
    return mn;
  }

// BEGIN CUT HERE
public:
void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
private:
template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
void test_case_0() { int Arg0 = 2; int Arg1 = 2; verify_case(0, Arg1, printSmiles(Arg0)); }
void test_case_1() { int Arg0 = 6; int Arg1 = 5; verify_case(1, Arg1, printSmiles(Arg0)); }
void test_case_2() { int Arg0 = 11; int Arg1 = 11; verify_case(2, Arg1, printSmiles(Arg0)); }
void test_case_3() { int Arg0 = 16; int Arg1 = 8; verify_case(3, Arg1, printSmiles(Arg0)); }
void test_case_4() { int Arg0 = 1000; int Arg1 = 21; verify_case(4, Arg1, printSmiles(Arg0)); }

// END CUT HERE

};


// BEGIN CUT HERE

int main() {
  EmoticonsDiv2 ___test;
  ___test.run_test(-1);
}

// END CUT HERE
