#include <bits/stdc++.h>
using namespace std;

int n;
int a[200000], b[200000];

int main(){
    cin >> n;
    int res = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]] = b[a[i] - 1] + 1;
        res = max(res, b[a[i]]);
    }
    cout << n - res << endl;
}










