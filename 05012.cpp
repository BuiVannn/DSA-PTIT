#include <bits/stdc++.h>
using namespace std;

#define mod                 1000000007
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


int n, k;
void setup(){
    int a[1005][1005];
    a[1][0] = a[1][1] = 1;
    for(int i = 2; i <= n; i++){
        a[i][0] = 1;
        a[i][i] = 1;
        for(int j = 1; j < i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            a[i][j] %= mod;
        }
    }
    cout << a[n][k] << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        setup();
    }
}



