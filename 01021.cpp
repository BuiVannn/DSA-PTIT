#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        int cuoi = 1;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            if(a[i] != n - k + i) cuoi = 0;
        }
        if(cuoi){
            cout << k << endl;
        }
        else{
            int b[k + 1];
            for(int i = 1; i <= k; i++) b[i] = a[i];
            int l;
            int ans = 0;
            for(l = k ; l >= 1; l--){
                if(a[l] < n + l - k){
                    //ans = 1;
                    break;
                }
            }
            a[l] += 1;
            for(int j = l + 1 ; j <= k; j++){
                a[j] = a[l] + j - l;
            }
            //for(int i = 1; i <= k; i++) cout << a[i] << ' ';
            //cout << endl;
            int cnt = 0;
            set <int> s1, s2;
            for(int i = 1; i <= k; i++){
                for(int j = 1; j <= k; j++){
                    if(a[i] == b[j]) cnt++;
                }
            }
            cout << k - cnt;
            cout << endl;
        }
    }
}