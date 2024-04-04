#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt[200] = {};
        for(int i = 0; i < s.size(); i++){
            int kt = s[i];
            cnt[kt]++;
        }
        int st = 'a', en = 'z', ok = 1;
        for(int i = st; i <= en; i++){
            if(cnt[i]){
                if((cnt[i] - 1 > s.size() - cnt[i]) && s.size() != 1){
                    ok = 0;
                    break;
                }
            }
        }
        if(ok) cout << 1;
        else cout << -1;
        cout << endl;
    }
}