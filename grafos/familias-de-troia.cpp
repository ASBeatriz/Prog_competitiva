//  Famílias de Troia - OBI 2013 P2F2

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50010;
int n, m, componente[MAXN], nComp = 0;
vector <int> adj[MAXN];

void iniciarComp(){
    for(int i=0; i<MAXN; i++){
        componente[i] = -1;
    }
}

void dfs(int i){
    for(int x:adj[i]){  //verifica os vizinhos
        if(componente[x] == -1){
            componente[x] = componente[i];
            dfs(x);
        }
    }
}

int main(){
    iniciarComp();
    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        // monta lista de adjacência
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<=n; i++){
        if(componente[i] == -1){  //se não foi visitado
            nComp++;
            componente[i] = nComp;
            dfs(i);
        }
    }

    cout << nComp;
}
