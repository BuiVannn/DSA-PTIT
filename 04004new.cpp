#include <bits/stdc++.h>
using namespace std;

int load(long long n, long long k){
    if(n % 2 == 1) return k;
    return load(n / 2, k + 1);
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n, k; 
        cin >> n >> k;
        cout << load(k, 1) << endl;
    }
}