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
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        FOR(i, 0, n) cin >> a[i];
        FOR(i, 0, m) cin >> b[i];
        int i = 0, j = 0;
        v(int) v;
        while(i < n && j < m){
            if(a[i] <= b[j]){
                v.pb(a[i]);
                i++;
            }
            else{
                v.pb(b[j]);
                j++;
            }
        }
        FOR(c, i, n) v.pb(a[c]);
        FOR(c, j, m) v.pb(b[c]);
        cout << v[k - 1] << endl;
        
    }
}