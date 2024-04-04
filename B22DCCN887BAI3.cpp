#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], chuaxet[100], b[100][100];
int u, v;
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
        for(int v = 1; v <= n; v++){
            if(b[s][v] == 1 && chuaxet[v] == 1){
                hangdoi.push(v);
                chuaxet[v] = 0;
            }
        }
    }
}
int lien_thong_yeu(){
    for(int i = 1; i <= n; i++){
        chuaxet[i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == 1){
                b[i][j] = b[j][i] = 1;
            }
        }
    }
    bfs(1);
    int lienthong = 1;
    for(int i = 1; i <= n; i++){
        if(chuaxet[i] == 1){
            lienthong = 0;
            break;
        }
    }
    return lienthong;
}
int check_bac(){
    for(int i = 1; i <= n; i++){
        int ra = 0, vao = 0;
        for(int j = 1; j <= n; j++){
            ra += a[i][j];
        }
        for(int j = 1; j <= n; j++){
            vao += a[j][i];
        }
        if(ra - vao == 1) u = i;
        else if(vao - ra == 1) v = i;
    }
}
void duong_di_euler(){
    stack <int> nganxep;
    vector <int> ct;
    nganxep.push(u);
    while(!nganxep.empty()){
        int s = nganxep.top();
        int ke = 0;
        for(int i = 1; i <= n; i++){
            if(a[s][i]){
                ke = 1;
                int t = i;
                nganxep.push(t);
                a[s][t] = a[t][s] = 0;
                break;
            }
        }
        if(ke == 0){
            nganxep.pop();
            ct.push_back(s);
        }
    }
    //reserve(v.begin(), v.end());
    for(int i = ct.size() - 1; i >= 0; i--){
        cout << ct[i] << " ";
    }
}
int main(){
    ktao();
    reInit();
    if(check_bac() && lien_thong_yeu()){
        cout << "Day la do thi nua Euler" << endl;
        cout << "Duong di euler cua do thi la: " << endl;
        duong_di_euler();
    }
    else{
        cout << "Day khong phai do thi nua Euler" << endl;
    }   
}
