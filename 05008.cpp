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
        int n, k; 
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        F[0] = 1;
        for(int i = 0; i < n; i++) F[a[i]] = 1;
        for(int i = 0; i < n; i++){
            for(int j = k; j >= a[i]; j--){
                if(F[j - a[i]] == 1) F[j] = 1;
            }
        }
        if(F[k]) cout << "YES";
        else cout << "NO";
        cout << endl;

    }
}

/*
#include<iostream>
using namespace std;
string test(int* M, int n, int s) {
	int dp[100000] = { 0 };
	dp[0] = 1;
	for (int i = 0; i < n; i++)dp[M[i]] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = s; j >= M[i]; j--)
			if (dp[j - M[i]] == 1)dp[j] = 1;
	}
	if (dp[s] == 1)return "YES";
	return "NO";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, s; cin >> n >> s;
		int M[1000];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
		}
		cout << test(M, n, s) << endl;
	}
}
*/