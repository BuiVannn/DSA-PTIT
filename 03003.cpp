#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long sum = 0 ;
        int mod = 1000000007;
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            sum += a[i] * i;
            
        }
        cout << sum % mod << endl;
    }
}