#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int a[MAX][MAX], n, chuaxet[MAX], solt = 0;

void init(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        chuaxet[i] = 1;
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }

}
void dfs(int u){
    chuaxet[u] = 0;
    for(int v = 1; v <= n; v++){
        if(a[u][v] && chuaxet[v]){
            dfs(v);
        }
    }
}

int main(){
    init();
    for(int u = 1; u <= n; u++){
        if(chuaxet[u]){
            cout << "Thanh phan lien thong " << solt << " : ";
            dfs(u);
        }
    }
}