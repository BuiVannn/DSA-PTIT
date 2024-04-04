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
    int l = 1, r = n;
    int p = 1;
    while(l <= r){
        if(a[l] == a[r]){
            l++;
            r--;
        }
        else{
            p = 0;
            break;
        }
    }
    return p;
}
int main(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        if(check(a, n)){
            for(int i = 1; i <= n; i++){
                cout << a[i] << ' ';
            }
            cout << endl;
        }
        sinh();
    }
}