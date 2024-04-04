#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        set <int> a, b;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            //a.insert(x);
            set<int>::iterator it = a.find(x);
            if(it != a.end()){
                b.insert(x);
                
            }
            else a.insert(x);
        }
        for(set<int>::iterator i = a.begin(); i != a.end(); ++i){
            cout << *i << ' ';
        }
        cout << endl;
        for(set<int>::iterator i = b.begin(); i != b.end(); ++i){
            cout << *i << ' ';
        }
        cout << endl;

    }
}