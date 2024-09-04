//Problema "gincana" do Neps (https://neps.academy/br/exercise/309)

#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000

vector <int> amigos[MAXN]; //lista de adjacÊncia
int vis[MAXN]; //lista para marcar os "vertices" como visitado
int cont = 0, n, m;

//DFS
void dfs (int aluno){
    for(int i=0; i<amigos[aluno].size(); i++){
        int amg = amigos[aluno][i];
        if(vis[amg]) continue;
        vis[amg] = 1;
        dfs(amg);
    }
}

int main(){
    cin >> n >> m;

    // lê as arestas
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        amigos[a].push_back(b);
        amigos[b].push_back(a);
    }

    //percorre o vetor de adjacência aplicando dfs
    for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        vis[i] = 1;
        cont++; //conta quantos grafos conexos existem (times de alunos que são amigos entre si)
        dfs(i);
    }

    cout << cont;
}
