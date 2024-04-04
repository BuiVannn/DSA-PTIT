#include <bits/stdc++.h>
using namespace std;

int n, a[11], ok;
void ktao(){
    for(int i = 1; i <= n; i++) a[i] = i;
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << ' ';
}
void solve(){
        int i = n - 1;
        while(i >= 1 && a[i] > a[i + 1]){
            i--;
        }
        if(i == 0) ok = 0;
        else{

        
        int k = n;
        for(k = n; k >= i; k--){
            if(a[k] > a[i]) break;
        }
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        
        int l = i + 1, r = n;
        while(l <= r){
            int tmp1 = a[l];
            a[l] = a[r];
            a[r] = tmp1;
            l++;
            r--;
        }
        for(int j = 1; j <= n; j++) cout << a[j];
        cout << ' ';
        }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
        while(ok){
            solve();
        }
        cout << endl;
    }
}