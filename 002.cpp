#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok, k, b[100];

void ktao(){
    for( int i = 1; i <= n; i++){
        cin >> b[i];
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
int check(int a[], int n, int k, int b[]){
    int l = 1, r = n;
    int p = 1;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += b[i] * a[i];
    }
    if(sum == k){
        p = 1;
    }
    else{
        p = 0;
    }
    return p;
}
int main(){
    cin >> n;
    cin >> k;

    ok = 1;
    ktao();
    int cnt = 0;
    while(ok){
        if(check(a, n, k, b)){
            cnt++;
            for(int i = 1; i <= n; i++){
                if(a[i]){
                    cout << b[i] << ' ';
                }
            }
            cout << endl;
        }
        sinh();
    }
    cout << cnt;
}