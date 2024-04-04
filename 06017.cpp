#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        multiset <int> s;
        for(int i = 0; i < n + m; i++){
            int x; cin >> x;
            s.insert(x);
        }
        for(multiset <int> :: iterator i = s.begin(); i != s.end(); i++){
            cout << *i << ' ';
        }
        cout << endl;
    }
}