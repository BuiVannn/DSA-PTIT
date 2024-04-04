#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, a[20];
        cin >> n;
        int x = n;
        int y = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        while(x--){
            cout << '[';
            for(int i = y; i < n - 1; i++){
                cout << a[i] << ' ';
            }
            cout << a[n - 1] << ']';
            cout << endl;
            y++;
            for(int i = n - 1; i >= y; i--){
                a[i] += a[i-1];
            }
        }
    }
}