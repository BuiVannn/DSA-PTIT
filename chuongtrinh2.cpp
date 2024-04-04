#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> a[n + 1];
    vector <int> c[n + 1];
    int dsc[m][2];
    int vohuong = 1;
    for(int i = 0; i < m; i++){
        int dau, cuoi;
        cin >> dau >> cuoi;
        if(cuoi < dau) vohuong = 0;
        a[dau].push_back(cuoi);
        dsc[i][0] = dau;
        dsc[i][1] = cuoi;
    }
    int matran[n + 1][n + 1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++) matran[i][j] = 0;
    }
    cout << "Chuyen tu danh sach canh sang ma tran ke" << endl;
    for(int i = 1; i < n + 1; i++){
        for(int j = 0; j < a[i].size(); j++){
            matran[i][a[i][j]] = 1;
            if(vohuong){
                matran[a[i][j]][i] = 1;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << matran[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl;
    cout << "Chuyen tu danh sach canh sang danh sach ke" << endl;
    for(int i = 0; i < m; i++){
        int dau = dsc[i][0];
        int cuoi = dsc[i][1];
        c[dau].push_back(cuoi);
        if(vohuong){
            c[cuoi].push_back(dau);
        }
        
    }
    for(int i = 1; i <= n; i++){
        cout << "Ke(" << i << "): ";
        for(int j = 0; j < c[i].size(); j++){
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    
}