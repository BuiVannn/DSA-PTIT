#include <bits/stdc++.h>
using namespace std;

int n1, n2, k;
int a[100], b[100];

void sinh(int b[], int n, int k){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
    while(1){
        for(int i = 1; i <= k; i++){
            cout << b[a[i] - 1] << ' ';
        }
        cout << endl;
        int i = k;
        while(i > 0 && a[i] >= n2 - k + i){
            i--;
        }
        if(i == 0) return;
        a[i] = a[i] + 1;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[i] + j - i;
        }
    }
}
int main(){
    cin >> n1 >> k;
    set <int> se;
    for(int i = 0; i < n1; i++){
        int x; cin >> x;
        se.insert(x);
    }
    n2 = se.size();
    int l = 0;
    for(set <int>:: iterator i = se.begin(); i != se.end(); i++){
        int x = *i;
        b[l] = x;
    }
    sinh(b, n2, k);

}