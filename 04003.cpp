#include <bits/stdc++.h>
using namespace std;

int MOD = 123456789;
long long lt(int n, int k){
    if (k == 0) return 1;
    if(k == 1) return n;
    else{
        long long tmp = lt(n, k / 2);
        if(k % 2 == 0) return tmp % MOD * tmp % MOD;
        else return tmp % MOD * tmp % MOD * n % MOD; 
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << lt(2, n - 1) << endl;
    }
}