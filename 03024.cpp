#include <bits/stdc++.h>
using namespace std;

bool cmp(pair <int, int> a, pair <int, int> b){
    return a.second < b.second;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        pair <int, int> a[n];
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            a[i].first = x;
            a[i].second = y;

        }
        sort(a, a + n, cmp);
        int cnt = 1;
        int it = a[0].second;
        for(int i = 1; i < n; i++){
            if(a[i].first > it){
                it = a[i].second;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}