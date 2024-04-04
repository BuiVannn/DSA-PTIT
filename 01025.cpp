#include <bits/stdc++.h>
using namespace std;

int n, k, a[20], ok;
int b[16] = {'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};


void ktao(){
    for(int i = 1; i <= k; i++) a[i] = i;

}

void sinh(){
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
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        ktao();
        while(ok){
            for(int i = 1; i <= k; i++){
                char tmp = b[a[i]];
                cout << tmp;
            }
            cout << endl;
            sinh();
        }
    }
}