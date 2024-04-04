#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    long long m1 = a[n-1] * a[n - 2];
    long long m2 = m1 * a[n - 3];
    long long d1 = a[0] * a[1];
    long long d2 = d1 * a[n - 1];
    //long long d3 = d1 * a[2];
    cout << max(max(d1, max(m1, m2)), d2);
    
}