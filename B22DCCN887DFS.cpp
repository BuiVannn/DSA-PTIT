#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], chuaxet[100];
void ktao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
}

void reInit(){
    for(int i = 1; i <= n; i++) chuaxet[i] = 1;
}

void dfs(int u){
    stack <int> nganxep;
    nganxep.push(u);
    cout << u << ' ';
    chuaxet[u] = 0;
    while(!nganxep.empty()){
        int s = nganxep.top();
        nganxep.pop();
        for(int v = 1; v <= n; v++){
            if(a[s][v] == 1 && chuaxet[v] == 1){
                nganxep.push(s);
                nganxep.push(v);
                cout << v << ' ';
                chuaxet[v] = 0;
                break;
            }
        }
    }
}

int main(){
    int u;
    ktao();
    reInit();
    cin >> u;
    // Bai 1
    dfs(u);
}