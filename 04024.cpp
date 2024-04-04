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

ll a[15][15], n , k;

struct Matrix{
    ll res[15][15];
};
Matrix base;
void nhap(){
    cin >> n >> k;
    
    FOR(i, 0, n){
        FOR(j, 0, n) cin >> base.res[i][j];
    }
}




Matrix nhan(Matrix a, Matrix b){
    Matrix ans;
    FOR(i, 0, n){
        FOR(j, 0, n){
            for(ans.res[i][j] = k = 0; k < n; k++){
                ans.res[i][j] += (a.res[i][k] % MOD) * (b.res[k][j] % MOD);
                ans.res[i][j] %= MOD;
            }
        }
    }
    return ans;
}
Matrix luythua(Matrix base, ll p){
    Matrix ans;
    FOR(i, 0, n){
        FOR(j, 0, n){
            ans.res[i][j] = (i == j);
        }
    }
    while(p){
        if(p & 1){
            ans = nhan(ans, base);
        }
        base = nhan(base, base);
        p >>= 1; // p /= 2;
    }
    return ans;
}
int main(){
    int t; cin >> t;
    while(t--){
        nhap();
        Matrix a = luythua(base, k);
        ll s = 0;
        FOR(i, 0, n){
            s += a.res[i][n - 1] % MOD;
            s %= MOD;
        }
        cout << s << endl;
    }
}