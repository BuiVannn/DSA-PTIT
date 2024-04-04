#include <bits/stdc++.h>
using namespace std;

int n, a[100], dd[100];

void sinh(int a[], int n){
    for(int i = 1; i <= n; i++){
        a[i] = n - i + 1;
    }
    while(1){
        int i;
        for(i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << " ";
        i = n - 1;
        while(i > 0 && a[i] < a[i + 1]){
            i--;
        }
        if(i == 0) return;
        int k = n; 
        while(a[k] > a[i]) k--;
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
        int l = i + 1; int r = n;
        while(l < r){
            tmp = a[l]; a[l] = a[r];
            a[r] = tmp;
            l++; r--;
        }
        
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        sinh(a, n);
        cout << endl;
    }
}