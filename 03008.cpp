#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
int main(){
    int t; cin >> t;
    while(t--){
        vector < pair<int, int> > v;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            pair <int, int> p;
            p.first = a;
            v.push_back(p);
        }
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            v[i].second = a;
        }
        vector <int> d(n, 1);
        sort(v.begin(), v.end(), cmp);
        //for(int i = 0; i < n; i++){
        //    cout << v[i].first << ' ' << v[i].second << endl;
        //}
        int res = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < i; j++){
                if(v[i].first >= v[j].second){
                    cnt = max(cnt, d[j]);
                }
            }
            d[i] += cnt;
            res = max(res, d[i]);
        }
        cout << res << endl;
    }
}