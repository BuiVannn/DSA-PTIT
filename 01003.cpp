#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int cuoi = 1;
    for(int i = 1; i <= n; i++) if(a[i] != n - i + 1) cuoi = 0;
    if(cuoi){
        for(int i = 1; i <= n; i++) cout << i << ' ';
        cout << endl;
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
        for(int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}