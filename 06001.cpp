#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        vector <int> v1, v2;
        //if(n % 2 != 0){
            for(int i = 0; i < n / 2; i++) v1.push_back(a[i]);
            for(int i = n - 1; i >= n / 2; i--) v2.push_back(a[i]);
        //}
        for(int i = 0; i < n / 2; i++){
            cout << v2[i] << ' ' << v1[i] << ' ';
        }
        
        if(n % 2 != 0)
            cout << v2[v2.size() - 1];
        cout << endl;
    }
}