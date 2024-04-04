#include <bits/stdc++.h>
using namespace std;

int a[1000001];
void sang(){
    for(int i =0 ; i <= 1000000; i++) a[i] = 1;
    a[0] = a[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++){
        for(int j = i * i; j <= 1000000; j += i){
            a[j] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        sang();
        int ok = 1;
        //for(int i = 0; i < 100; i++) cout << a[i] << ' ';
        for(int i = 2; i <= n; i++){
            if(a[i]){
                //int f = binary_search(a, a + 1000001, n - i);
                //cout << f << ' ' << n - i << endl;
                if(a[n-i]){
                    cout << i << ' ' << n - i << endl;
                    ok = 0;
                    break;
                }
            }
        }
        if(ok) cout << -1 << endl;
    }
}