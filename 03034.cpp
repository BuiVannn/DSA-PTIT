#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector <int> x, y, z;
        multiset <int> a, b;
        for(int i = 0; i < n; i++){
            int p; cin >> p;
            x.push_back(p);
        }
        for(int i = 0; i < m; i++){
            int p; cin >> p;
            a.insert(p);
        }
        for(int i = 0; i < k; i++){
            int p; cin >> p;
            b.insert(p);
        }
        for(int i = 0; i < x.size(); i++){
            if(a.count(x[i]) != 0){
                y.push_back(x[i]);
                a.erase(a.find(x[i]));
            }
        }
        for(int i = 0; i < y.size(); i++){
            if(b.count(y[i]) != 0){
                z.push_back(y[i]);
                b.erase(b.find(y[i]));
            }
        }
        if(z.size() == 0){
            cout << "NO";
        }
        else{
            for(int i = 0; i < z.size(); i++){
                cout << z[i] << ' ';
            }
        }
        cout << endl;

    }
}