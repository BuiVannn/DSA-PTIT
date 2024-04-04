#include <bits/stdc++.h>
using namespace std;

int n, a[1001][1001], chuaxet[1001];
int dinh[100], u, v;
int soduongdi = 0;
void Init(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            a[i][j] = 0;
            dinh[j] = 0;
        }
    }
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        string s, num;
        getline(cin, s);
        stringstream ss(s);
        while(ss >> num){
            int l = 0;
            for(int j = 0; j < num.size(); j++){
                l = l * 10 + num[j] - '0';
            }
            a[i][l] = 1;
        }
    }

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
int lien_thong(){
    for(int i = 1; i <= n; i++){
        chuaxet[i] = 1;
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

void dfs(int p, int q, vector <int> path){
    chuaxet[p] = 0;
    path.push_back(p);
    if(p == q){
        soduongdi++;
        for(int i = 0; i < path.size(); i++){
            dinh[path[i]]++;
        }
    }
    else{
        for(int i = 1; i <= n; i++){
            if(a[p][i] && chuaxet[i]){
                dfs(i, q, path);
            }
        }
    }
    path.pop_back();
    chuaxet[p] = 1;
}
int main(){
    Init();
    cin >> u >> v;

    if(lien_thong()){
        cout << "Day la do thi lien thong" << endl;
    }
    else{
        cout << "Day khong phai do thi lien thong" << endl;
    }
    vector <int> res;
    vector <int> path;
    for(int i = 1; i <= n; i++) chuaxet[i] = 1;
    dfs(u, v, path);
    for(int i = 1; i <= n; i++){
        if(dinh[i] == soduongdi && i != u && i != v){
            res.push_back(i);
        }
    }
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}