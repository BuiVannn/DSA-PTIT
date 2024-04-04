#include <bits/stdc++.h>
using namespace std;

#define MOD                 1000000007
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

ll F[2][2], M[2][2], n;

void Mul(ll f[2][2], ll m[2][2]){
    ll c[2][2];
    FOR(i, 0, 2){
        FOR(j, 0, 2){
            c[i][j] = 0;
            FOR(k, 0, 2){
                c[i][j] += (f[i][k] % MOD) * (m[k][j] % MOD);
                c[i][j] %= MOD;
            }
        }
    }
    F[0][0] = c[0][0];
    F[0][1] = c[0][1];
    F[1][0] = c[1][0];
    F[1][1] = c[1][1];
}
void Pow(ll f[2][2], ll n){
    if(n <= 1) return;
    Pow(f, n / 2);
    Mul(f, f);
    if(n & 1) Mul(f, M);
}
void solve(){
    F[0][0] = F[0][1] = F[1][0] = 1;
    F[1][1] = 0;
    M[0][0] = M[0][1] = M[1][0] = 1;
    M[1][1] = 0;
    cin >> n;
    if(n == 0) cout << 0;
    else{
        Pow(F, n - 1);
        cout << F[0][0];
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}