#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        set <int> s;
        for(int i = 1; i <= n; i++){
            long long x; cin >> x;
            while(x){
                int k = x % 10;
                x /= 10;
                s.insert(k);
            }
        }
        
        for(set <int> :: iterator i = s.begin(); i != s.end(); i++){
            cout << *i << ' ';
        }
        cout << endl;
    }
}