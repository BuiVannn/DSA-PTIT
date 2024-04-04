#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return abs(a) < abs(b);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int minn = INT_MAX;
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(abs(a[i] + a[j]) < minn){
                    minn = abs(a[i] + a[j]);
                    ans = a[i] + a[j];
                }
            }
        }
        cout << ans << endl;
    }
}