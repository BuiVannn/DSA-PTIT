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


void bfs(int u){
    queue <int> hangdoi;
    hangdoi.push(u);
    chuaxet[u] = 0;
    while(!hangdoi.empty()){
        int s = hangdoi.front();
        hangdoi.pop();
        cout << s << " ";
        for(int v = 1; v <= n; v++){
            if(a[s][v] == 1 && chuaxet[v] == 1){
                hangdoi.push(v);
                chuaxet[v] = 0;
            }
        }
    }
}
int main(){
    int u;
    ktao();
    reInit();
    cin >> u;
    bfs(u);
}