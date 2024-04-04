#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 1], b[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        int l, r;
        for(int i = 1; i <= n; i++){
            if(a[i] != b[i]){
                l = i;
                break;
            }
        }
        for(int i = n; i >= 1; i--){
            if(a[i] != b[i]){
                r = i;
                break;
            }
        }
        cout << l << ' ' << r << endl;
/*        for(int i = 1; i <= n; i++){
            cout << a[i] << ' ';
        }
        cout << endl;
        for(int i = 1; i <= n; i++){
            cout << b[i] << ' ';
        }
        cout << endl;
        */
    }
}