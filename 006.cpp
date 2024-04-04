#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set <int> se;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        auto c = se.find(x);

        if(c == se.end()){
            cout << x << ' ';
            
        }
        se.insert(x);
    }
    //for(auto i = se.begin(); i != se.end(); i++) cout << *i << ' ';
}