#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x) a.push_back(x);
        }
        sort(a.begin(), a.end());
        long long s1 = 0, s2 = 0;
        for(int i = 0; i < a.size(); i += 2) s1 = s1 * 10 + a[i];
        for(int i = 1; i < a.size(); i += 2) s2 = s2 * 10 + a[i];
        cout << s1 + s2 << endl;
    }
}