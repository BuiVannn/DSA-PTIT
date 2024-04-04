#include <bits/stdc++.h>
using namespace std;

long long fibo[100];
char load(int n, int k){
    if(n == 1) return 'A';
    else if(n == 2) return 'B';
    if(k <= fibo[n - 2])  return load(n - 2, k);
    else return load(n - 1, k - fibo[n - 2]);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        fibo[1] = 1;
        fibo[2] = 1;
        for(int i = 3; i < 94; i++){
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        cout << load(n, k) << endl;
    }
}