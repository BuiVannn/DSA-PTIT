#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[200][200];
void Init(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
}

int Try(int n, int m){
    if(n == 1 || m == 1) return 1;
    else{
        return Try(n - 1, m) + Try(n, m - 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        Init();
        cout << Try(n, m) << endl;
    }
}