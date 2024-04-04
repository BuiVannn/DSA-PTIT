#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, a[20];
        cin >> n;
        int x = n;
        int y = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        vector < vector<int> > v;
        while(x--){
            vector<int> c;
            for(int i = y; i < n - 1; i++){
                c.push_back(a[i]);
            }
            c.push_back(a[n - 1]);
            y++;
            v.push_back(c);
            for(int i = n - 1; i >= y; i--){
                a[i] += a[i-1];
            }
        }
        for(int i = v.size() - 1; i >= 0; i--){
            cout << '[';
            for(int j = 0; j < v[i].size() - 1; j++){
                cout << v[i][j] << ' ';
            }
            cout << v[i][v[i].size() - 1] << "] ";

        }
        cout << endl;
    }
}