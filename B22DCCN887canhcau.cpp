#include <bits/stdc++.h>
using namespace std;

int n, m;
vector <int> v[100];
int a[100][100];
int vohuong = 1;
int chuaxet[100];
void Init(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int dau, cuoi;
        cin >> dau >> cuoi;
        if(cuoi < dau) vohuong = 0;
        v[dau].push_back(cuoi);
    }
    for(int i = 1; i <= n; i++){
        chuaxet[i] = 1;
        for(int j = 1; j <= n; j++) a[i][j] = 0;
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 0; j < v[i].size(); j++){
            a[i][v[i][j]] = 1;
            if(vohuong){
                a[v[i][j]][i] = 1;
            }
        }
    }
}
void reInit(){
    for(int i = 1; i <= n; i++){
        chuaxet[i] = 1;
    }
}
void bfs(int u){
    queue <int> hangdoi;
    hangdoi.push(u);
    chuaxet[u] = 0;
    while(!hangdoi.empty()){
        int s = hangdoi.front();
        hangdoi.pop();
        for(int v = 1; v <= n; v++){
            if(a[s][v] == 1 && chuaxet[v] == 1){
                hangdoi.push(v);
                chuaxet[v] = 0;
            }
        }
    }
}

void canhcau(){
    reInit();
    int co = 0, cau = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] && vohuong){
                a[i][j] = 0;
                a[j][i] = 0;
                co = 1;
            }
            else if(a[i][j] && !vohuong){
                a[i][j] = 0;
                co = 2;
            }
            bfs(1);
            for(int k = 1; k <= n; k++){
                if(chuaxet[k]){
                    cau = 1;
                    break;
                }
            }
            if(cau){
                cout << i << ' ' << j << endl;
            }
            if(co == 1){
                a[i][j] = 1;
                a[j][i] = 1;
            }
            else if(co == 2) a[i][j] = 1;
            reInit();
        }
    }
}
int main(){
    Init();
    canhcau();
}