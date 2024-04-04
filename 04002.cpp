#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000007;
long long lt(long long n, long long k){
    if (k == 0) return 1;
    if(k == 1) return n;
    else{
        long long tmp = lt(n, k / 2);
        if(k % 2 == 0) return tmp % MOD * tmp % MOD;
        else return tmp % MOD * tmp % MOD * n % MOD; 
    }
}
long long dao(long long n){
    long long tmp = n;
    long long ans = 0;
    while(n > 0){
        ans = n % 10 + ans * 10;
        n /= 10;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n;
        k = dao(n);
        cout << k << endl;
        cout << lt(n, k) % MOD << endl;

    }
}