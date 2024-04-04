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
    init();
    for(int u = 1; u <= n; u++){
        if(chuaxet[u]){
            solt++;
            cout << "Thanh phan lien thong " << solt << " : ";
            dfs(u);
            cout << endl;
        }
    }
}