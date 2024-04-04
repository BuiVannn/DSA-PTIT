#include <bits/stdc++.h>
using namespace std;

#define MOD     1000000007
#define ll      long long

ll Pow(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll x = Pow(a, b / 2);
    x %= MOD;
    if(b % 2 == 1)
        return (x * x * (a % MOD)) % MOD;
    return (x * x) % MOD;
}
int main(){
    ll a, b;
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        if(b == 0) a = 1;
        ll y = 1;
        while(1){
            if(b == 1 || b == 0) break;
            if(b % 2 == 0){
                a = (a % MOD * a % MOD) % MOD;
                b /= 2;
            }
            else{
                y = (y % MOD * a % MOD) % MOD;
                b -= 1;
            }
        }
        cout << (a % MOD * y % MOD) % MOD << endl;
    }
}