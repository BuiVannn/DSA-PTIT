#include <bits/stdc++.h>
using namespace std;
int a[20], xet[20], n;
string s;
void Try(int m){
    if(m > n){
        for(int i = 1; i <= n; i++){
            cout << s[a[i] - 1];
        }
        cout << ' ';
        return;
    }
    for(int i = 1; i <= n; i++){
        if(xet[i] == 0){
            a[m] = i;
            xet[i] = 1;
            Try(m + 1);
            xet[i] = 0;
        }
    }
}
void out(int a[], int n, string s){
    for(int i = 1; i <= n; i++){
        xet[i] = 0;
    }
    Try(1);
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        n = s.size(); 
        out(a, n, s);
        cout << endl;
    }
}