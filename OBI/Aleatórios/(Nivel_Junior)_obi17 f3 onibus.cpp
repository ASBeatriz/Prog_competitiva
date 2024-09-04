//Questão "Ônibus" - OBI 2017, Nível Junior, Fase 3

#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010
int n,a,b;
vector<int> grafo[MAXN];
int dist[MAXN];

void dfs(int orig, int cont, int last)
{
    dist[orig] = cont;
    for(int i=0; i<grafo[orig].size(); i++)
    {
        int adj = grafo[orig][i];
        if(adj == last) continue;
        dfs(adj,cont+1,orig);
    }
}

int main(){
	cin >> n >> a >> b;

	for(int i=0; i<n; i++) dist[i]=0;

	for(int i=1; i<n; i++)
    {
        int u,v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }

    dfs(a,0,0);
    cout << dist[b];

	return 0;
}
