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

char c[30];
char find(ll n, ll k){
    if(n % 2 != 0){
        return c[k];
    }
    else{
        return find(n / 2, k + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        c[1] = 'A';
        FOR(i, 2, 27){
            c[i] = c[i - 1] + 1;
        }
        //FOR(i, 1, 27) cout << c[i] << ' ';
        //cout << endl;
        cout << find(k, 1) << endl;
    }
}