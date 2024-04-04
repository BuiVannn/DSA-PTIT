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
int check_bac(){
    int ok = 1;
    for(int i = 1; i <= n; i++){
        int bac = 0;
        for(int j = 1; j <= n; j++){
            bac += a[i][j];
        }
        if(bac % 2 != 0){
            ok = 0;
            break;
        }
    }
    return ok;
    // neu ok = 1 tat ca dinh deu bac chan
}
void chu_trinh_euler(){
    stack <int> nganxep;
    vector <int> v;
    nganxep.push(1);
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
            v.push_back(s);
        }
    }
    //reserve(v.begin(), v.end());
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
}
int main(){
    ktao();
    reInit();
    if(check_bac() && lien_thong()){
        cout << "Day la do thi Euler" << endl;
        cout << "Chu trinh euler cua do thi la: " << endl;
        chu_trinh_euler();
    }
    else{
        cout << "Day khong phai do thi Euler" << endl;
    }   
}
