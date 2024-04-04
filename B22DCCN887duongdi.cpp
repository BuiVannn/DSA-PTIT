#include <bits/stdc++.h>
using namespace std;

int n, a[1001][1001], chuaxet[1001], truoc[1001], s, t;
vector < int> v[1001];

void Init(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) a[i][j] = 0;
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
        truoc[i] = 0;
    }

}

void bfs(int u){
    queue <int> hangdoi;
    hangdoi.push(u);
    chuaxet[u] = 0;
    while(!hangdoi.empty()){
        int k = hangdoi.front();
        hangdoi.pop();
        for(int v = 1; v <= n; v++){
            if(a[k][v] == 1 && chuaxet[v] == 1){
                hangdoi.push(v);
                chuaxet[v] = 0;
                truoc[v] = k;
            }
        }
    }
}
void duongdi(){
    if(truoc[t] == 0) cout << "no path";
    else{
        cout << t << ' ';
        int u = truoc[t];
        while(u != s){
            cout << u << ' ';
            u = truoc[u];
        }
        cout << s << endl;
    }
}

int main(){
    Init();
    cin >> s >> t;
    bfs(s);
    if(truoc[t] != 0){
        cout << "BFS path: ";
        duongdi();
    }
    else cout << "NO path";
}