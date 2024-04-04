#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int b[n];
        b[0] = a[0];
        for(int i = 1; i < n; i++){
            b[i] = max(a[i], a[i] + b[i - 1]);
        }
        int res = -1e9;
        for(int i = 0; i < n; i++){
            res = max(res, b[i]);
        }
        cout << res << endl;
    }
}