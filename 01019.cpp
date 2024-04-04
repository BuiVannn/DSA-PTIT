#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok;

void ktao(){
    for( int i = 1; i <= n; i++){
        a[i] = 0;
    }
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){
        ok = 0;
    }
    else a[i] = 1;
}
int check(int a[], int n){
    int p = 1;
    if(a[1] != 1 || a[n] != 0) p = 0;
    for(int i = 1; i <= n - 1; i++){
        if(a[i] == 1 && a[i + 1] == 1){
            p = 0;
            break;
        }
    }
    return p;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
        while(ok){
            if(check(a, n)){
                for(int i = 1; i <= n; i++){
                    if(a[i] == 1) cout << 'H';
                    if(a[i] == 0) cout << 'A';
                }
                cout << endl;
            }
            sinh();
        }
    }
}