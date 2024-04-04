#include <bits/stdc++.h>
using namespace std;

#define ll                  long long
#define	p(x)                pair<x,x>
#define v(x)                vector<x>
#define Tree                node*
#define sz(a)               a.size()
#define pb(a)               push_back(a)
#define pf(a)               push_front(a)
#define FOR(i, l, r)        for (int i = l; i < r; i++)
#define FORX(i, l, r, x)    for (int i = l; i < r; i += x)
#define FORD(i, l, r)       for (int i = l; i >= r; i--)
#define correct(x, y, n, m) 0 <= (x)&&(x) < (n)& & 0 <= (y)&&(y) < (m)
#define cin(M, n)           FOR(i, 0, n)cin >> M[i]
#define cout(M, n)          FOR(i, 0, n)cout << M[i] << " "
#define rs(M, x)            memset(M, x, sizeof(M))
#define reset()             FOR(i, 0, 1001)A[i].clear(), check[i] = false
#define faster()            cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()               int t; cin >> t; while (t--)
#define all(M)              M.begin(), M.end()

int main(){
    int t; cin >> t;
    while(t--){
        string X, Y;
        cin >> X >> Y;
        //X = '@' + X;
        //Y = '@' + Y;
        int F[X.size() + 1][Y.size() + 1];
        FOR(i, 0, X.size() + 1)
            FOR(j, 0, Y.size() + 1){
                if(i == 0 || j == 0) F[i][j] = 0;
                else{
                    if(X[i - 1] == Y[j - 1]){
                        F[i][j] = F[i - 1][j - 1] + 1;
                    }
                    else{
                        F[i][j] = max(F[i - 1][j], F[i][j - 1]);
                    }
                }
            }
        cout << F[X.size()][Y.size()] << endl;
    }
}