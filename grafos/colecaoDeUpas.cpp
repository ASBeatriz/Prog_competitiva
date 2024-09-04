//Exercício "Coleção de Upas" do Neps (https://neps.academy/br/exercise/568)
#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000

int n,m;
vector<int> lista1[MAXN];
int vis [MAXN];

int dfs(vector<int> l[MAXN], int a,int tam=0){
    tam++;
    for(int i=0; i<l[a].size(); i++){
        int adj = l[a][i];
        if(vis[adj]) continue;
        vis[adj] = 1;
        int tam2 = dfs(l, adj, tam);
        if (tam2 < tam) tam = tam2;
    }
    return tam;
}

int main(){
    cin >> n >> m;
    int a, b;
    cin >> a >> b;
    int antx = a, anty = b;

    for(int i=1; i<m; i++){
        int x, y;
        cin >> x >> y;

        if(antx != x) lista1[antx].push_back(x);
        if(antx != y) lista1[antx].push_back(y);
        if(anty != x) lista1[anty].push_back(x);
        if(anty != y) lista1[anty].push_back(y);

        antx = x;
        anty = y;
    }
    vis[a] = 1;
    int tam = dfs(lista1, a);

    cout << tam;
}