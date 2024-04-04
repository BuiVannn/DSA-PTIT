#include <bits/stdc++.h>
using namespace std;

int n, k, a[16], ok = 1;
void ktao(){
    cin >> n >> k;
    for(int i = 1; i <= k; i++) a[i] = i;
    for(int i = 1; i <= k; i++) cout << a[i];
    cout << ' ';
}
void sinh(){
    int cuoi = 1;
    for(int i = 1; i <= k; i++){
        if(a[i] != n - k + i){
            cuoi = 0;
        }
    }
    if(cuoi) ok = 0;
    else{
        int i;
        for(i = k; i >= 1; i--){
            if(a[i] < n - k + i){
                break;
            }   
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[i] + j - i;
        for(int i = 1; i <= k; i++) cout << a[i];
        cout << ' ';
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ktao();
        while(ok){
            sinh();
        }
        cout << endl;
        ok = 1;
    }
}