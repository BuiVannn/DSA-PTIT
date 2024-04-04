#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];

void sinh(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
    while(1){
        int ok = 0, cnt = 0;
        for(int i = 1; i <= n; i++){
            if(a[i]) cnt++;
        }
        if(cnt == k){
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << endl;
        }
        int i = n;
        while(i > 0 && a[i] == 1){
            a[i] = 0;
            i--;
        }
        if(i == 0) return;
        else a[i] = 1;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        sinh();
    }
}