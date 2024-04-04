#include <bits/stdc++.h>
using namespace std;

int a[20], n, k, ok;
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
        int b[k + 1];
        for(int i = 1; i <= k; i++) cin >> b[i];
        ok = 1;
        int check = 1;
        
        ktao();
        int cnt = 1;
        for(int i = 1; i <= k; i++){
            if(b[i] != i) check = 0;
        }
        if(check) cnt = 1;
        else{
            int on = 1;
            while(ok){
                on = 1;
                for(int i = 1; i <= k; i++){
                    if(a[i] != b[i]) on = 0;
                }
                sinh();
                //for(int i = 1; i <= k; i++) cout << a[i] ;
                //cout << endl;
                if(!on) cnt++;
                else break;
            }
        }
        cout << cnt << endl;
    }
}