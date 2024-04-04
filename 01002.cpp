#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[k + 1];
    for(int i = 1; i <= k; i++) cin >> a[i];
    int cuoi = 1;
    for(int i = 1; i <= k; i++){
        if(a[i] != n - k + i){
            cuoi = 0;
        }
    }
    if(cuoi){
        for(int i = 1; i <= k; i++){
            cout << i << ' ';
        }
        cout << endl;
    }
    else{
        int i;
        int c = 0;
        for(i = k; i >= 1; i--){
            if(a[i] < n - k + i){
                break;
            }   
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[i] + j - i;
        for(int i = 1; i <= k; i++) cout << a[i] << ' ';
        cout << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}