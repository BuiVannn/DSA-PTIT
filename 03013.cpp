#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        int cnt[200] = {};
        for(int i = 0; i < s.size(); i++){
            int kt = s[i];
            cnt[kt]++;
        }
        int st = 'A', en = 'Z', ok = 1;
        for(int i = st; i <= en; i++){
            if(cnt[i]){
                if((s.size() - cnt[i] < (n - 1) * (cnt[i] - 1)) && s.size() != 1){
                    
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