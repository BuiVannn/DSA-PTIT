#include <bits/stdc++.h>
using namespace std;
int n;
int check(int a[], int b[]){
    int ok = 1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            ok = 0;
            break;
        }
    }
    return ok;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int ok = 1;
        int cnt = 0;
        while(ok){
            for(int i = 0; i < n; i++){
                if(a[i] != b[i]){
                    cnt++;
                    for(int j = i + 1; j < n; j++){
                        if(a[j] == b[i]){
                            swap(a[i], a[j]);
                        }
                    }
                }
            }
            if(check(a, b)) ok = 0;
        }
        cout << cnt << endl;
    }
}