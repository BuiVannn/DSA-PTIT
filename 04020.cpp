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


int binarySearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
        
    }
    return -1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        FOR(i, 0, n) cin >> a[i];
        if(binarySearch(a, n, x) == -1){
            cout << "NO";
        }
        else{
            cout << binarySearch(a, n, x) + 1;
        }
        cout << endl;
    }
}