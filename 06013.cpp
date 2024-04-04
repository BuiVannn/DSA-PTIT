#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort (a, a + n);
        int d = lower_bound(a, a + n, k) - a;
        int c = upper_bound(a, a + n, k) - a;
        if(a[d] != k){
            cout << -1;
        }
        else{
            cout << c - d;
        }
        cout << endl;
    }
}