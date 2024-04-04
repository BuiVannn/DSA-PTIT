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
        int F[50000] = {};
        int n, S = 0; 
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			S += a[i];
		}
		if(S & 1){
			cout << "NO" << endl;
		}
		else{
			F[0] = 1;
			for(int i = 0; i < n; i++) F[a[i]] = 1;
			for(int i = 0; i < n; i++){
				for(int j = S / 2; j >= a[i]; j--){
					if(F[j - a[i]] == 1) F[j] = 1;
				}
			}
			if(F[S / 2]) cout << "YES";
			else cout << "NO";
			cout << endl;
		}

    }
}



