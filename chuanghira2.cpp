#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int ok = 1;
        for(int i = 1; i < n - 1; i++){
            if(a[i] != a[i-1] && a[i] != a[i+1]){
                ok = 0;
                cout << i + 1 << endl;
                break;
            }
        }
        if(ok){
            if(a[0] != a[1]) cout << 1 << endl;
            else cout << n << endl;
        }
    }
}