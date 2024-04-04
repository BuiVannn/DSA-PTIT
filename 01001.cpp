#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int cuoi = 1;
    for(int i = 0; i < s.size(); i++) if(s[i] == '0') cuoi = 0;
    if(cuoi){
        for(int i = 0; i < s.size(); i++) cout << '0';
        cout << endl;
    }
    else{
        int i;
        for(i = s.size() - 1; i >= 0; i--){
            if(s[i] == '1'){
                s[i] = '0';
            }
            else  break;
        }
        s[i] = '1';
        for(int i = 0; i < s.size(); i++) cout << s[i];
        cout << endl;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}