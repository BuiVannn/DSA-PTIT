#include <bits/stdc++.h>
using namespace std;

int n, a[11], ok;
void ktao(){
    for(int i = 1; i <= n; i++) a[i] = i;
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << ' ';
}
void solve(){
    int cuoi = 1;
    for(int i = 1; i <= n; i++) if(a[i] != n - i + 1) cuoi = 0;
    if(cuoi) {
        ok = 0;
        for(int i = n; i >= 1; i--) cout << i;
        
    }
    else{
        int i = n;
        while(i >= 1 && a[i - 1] > a[i]){
            i--;
        }
        int k;
        for(k = n; k >= i; k--){
            if(a[k] > a[i]) break;
        }
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        int l = i, r = n;
        while(l <= r){
            tmp = a[l];
            a[l] = a[r];
            a[r] = tmp;
            l++;
            r--;
        }
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << ' ';
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        ok = 1;
        ktao();
        while(ok){
            solve();
            cout << endl;
        }
    }
}