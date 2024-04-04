#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a ) cin >> x;
        int d = -1e8;
        sort(a, a + n);
        for(int i = 1; i < n; i++){
            d = max(abs(a[i] - a[i-1]), d);
        }
        if(d > 1) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}