#include <bits/stdc++.h>
using namespace std;

int n, a[1001][1001], chuaxet[1001];


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
    }

}
void reInit(){
    for(int i = 1; i <= n; i++){
        chuaxet[i] = 1;
    }
}
void dfs(int u){
    stack <int> nganxep;
    nganxep.push(u);
    chuaxet[u] = 0;
    while(!nganxep.empty()){
        int s = nganxep.top();
        nganxep.pop();
        for(int v = 1; v <= n; v++){
            if(a[s][v] == 1 && chuaxet[v] == 1){
                nganxep.push(s);
                nganxep.push(v);
                chuaxet[v] = 0;
                break;
            }
        }
    }
}

void dinhtru(){
    reInit();
    for(int u = 1; u <= n; u++){
        chuaxet[u] = 0;
        if(u == 1) dfs(2);
        else dfs(1);
        int tru = 0;
        for(int i = 1; i <= n; i++){
            if(chuaxet[i]){
                tru = 1;
                break;
            }
        }
        if(tru) cout << u << ' ';
        reInit();
    }
}

int main(){
    Init();
    dinhtru();
}