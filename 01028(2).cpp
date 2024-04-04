#include <bits/stdc++.h>
using namespace std;

int n, k, a[20], ok;

void ktao(){
    for(int i = 1; i <= k; i++) a[i] = i;
}
void solve(){
    int cuoi = 1;
    for(int i = 1; i <= k; i++){
        if(a[i] != n - k + i) cuoi = 0;
    }
    if(cuoi){
        ok = 0;
    }
    else{
        int i;
        for(i = k; i >= 1; i--){
            if(a[i] < n - k + i){
                break;
            }
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[i] + j - i;
        }
    }
}
int check(int a[], int b[]){
    for(int i = 1; i <= k; i++){
        for(int j = 0; j < n; j++){
            if(a[i] == b[j]) return 1;
        }
    }
    return 0;
}
int main(){
    int m;
    cin >> m >> k;
    int b[m];
    int Max = -1e9;
    for(int i = 0; i < m; i++){
        cin >> b[i];
        Max = max(Max, b[i]);
    }
    n = Max;
    ok = 1;
    ktao();
    while(ok){
        if(check(a, b)){
            for(int i = 1; i <= k; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
        }
        solve();
    }
}