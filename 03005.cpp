#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int d = 0, c = 0;
        if(k * 2 <= n){
            for(int i = 0; i < k; i++) d += a[i];
            for(int j = k; j < n; j++) c += a[j];
        }
        else{
            for(int i = 0; i < n - k; i++) d += a[i];
            for(int j = n - k; j < n; j++) c += a[j];
        }
        
        
        cout << abs(c - d) << endl;
    }
}