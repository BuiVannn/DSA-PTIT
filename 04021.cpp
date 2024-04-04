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

ll fibo[100];

char find(ll n, ll k){
    if(n == 1) return '0';
    else if(n == 2) return '1';
    if(k <= fibo[n - 2]) return find(n - 2, k);
    else{
        return find(n - 1, k - fibo[n - 2]);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        fibo[1] = 1;
        fibo[2] = 1;
        FOR(i, 3, 94){
            fibo[i] = fibo[i - 2] + fibo[i - 1];
        } 
        cout << find(n, k) << endl;
    }
}