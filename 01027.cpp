#include <bits/stdc++.h>
using namespace std;
int h[11], n, ok;
void ktao(){
    for(int i = 1; i <= n; i++) h[i] = i;
}
void sinh(){
    int i = n - 1;
    while(i >= 1 && h[i] > h[i + 1] ){
        i--;
    }
    if(i == 0){
        //1 4 3 2 
        ok = 0;
    }
    else{
        int k = n;
        for(k = n; k >= i; k--){
            if(h[k] > h[i]) break;
        }
        int tmp = h[i];
        h[i] = h[k];
        h[k] = tmp;
        
        int l = i + 1, r = n;
        while(l <= r){
            int tmp1 = h[l];
            h[l] = h[r];
            h[r] = tmp1;
            l++;
            r--;
        }

    }
}
int main(){
    //int t; cin >> t;
    //while(t--){
        cin >> n;
        int a[n + 1];
        int cnt = 0;
        for(int i = 1; i <= n; i++) cin >> a[i];
        ok = 1;
        sort(a + 1, a + n + 1);
        for(int i = 1; i <= n; i++) h[i] = a[i];
        //for(int i = 1; i <= n; i++) cout << h[i] << ' ';
        //cout << endl;
        while(ok){
            for(int i = 1; i <= n; i++) cout << h[i] << ' ';
            cout << endl;
            sinh();
            
            
        }
    //}
        //int check = 1;
}
