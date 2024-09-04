#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> grafo[100010];
ll visitado[100010], cont;
vector <ll> conjuntos;

void dfs (int pos){
    visitado[pos] = 1;
    cont++;

    for(int i=0; i<grafo[pos].size(); i++){
        if(visitado[grafo[pos][i]] == 1) continue;
        dfs(grafo[pos][i]);
    }
}

bool comp(int a,int b){
    return a>b;
}

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    if (m == 0) return 1;

    for(int i=0; i<n; i++){
        visitado[i]=0;
    }

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    }
    cont = 0;
    dfs(1);
    conjuntos.push_back(cont);
/*------------------------------------------
    for(int i=1; i<=n; i++){
            cout << i << ": ";
        for(int j=0; j<grafo[i].size(); j++){
            cout << grafo[i][j] << " ";
        }
        cout << "\n";
    }
    for(int i=1; i<=n; i++){
        cout << visitado[i] << " ";
    }
//-------------------------------------------*/
    for(int i=2; i<= n; i++){
        if(visitado[i] == 1) continue;
        else{
            cont = 0;
            dfs(i);
            conjuntos.push_back(cont);
        }
    }

    sort(conjuntos.begin(),conjuntos.end(),comp);

/*----------------------------------------
    cout << "conjuntos: ";
    for (int i=0; i<conjuntos.size(); i++){
        cout << conjuntos[i] << " ";
    }
    cout << endl;
//---------------------------------------*/

    int resp=0;
    for(int i=0; i<=k; i++){
        resp+= conjuntos[i];
    }
    cout << resp;
}
