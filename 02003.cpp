#include <bits/stdc++.h>
using namespace std;
int a[20][20], n;
vector <string> v;
void Try(int x, int y, string s){
    if(x >= n || y >= n) return;
    if(a[x][y] == 0) return;
    if(x == n - 1 && y == n - 1){
        v.push_back(s);
        return;
    }
    Try(x + 1, y, s + "D");
    Try(x, y + 1, s + "R");
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) cin >> a[i][j];
        v.clear();
        Try(0, 0, "");
        if(v.size() == 0) cout << "-1" << endl;
        else{
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << ' ';
            }
            cout << endl;
        }
    }
}