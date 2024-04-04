#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        for(long long &x : a) cin >> x;
        long long sum = 0;
        long long ma = a[0];
        for(int i = 0; i < n; i++){
            ma = a[i];
            if(a[i] < 0){
            while(a[i] < 0 && i < n){
                ma = max(ma, a[i]);
                i++;
            }
            }
            else{
            while(a[i] > 0 && i < n){
                ma = max(ma, a[i]);
                i++;
            }
            }
            i--;
            sum += ma;
        //    cout << ma << ' ';
        }
        cout << sum << endl;
    }
}