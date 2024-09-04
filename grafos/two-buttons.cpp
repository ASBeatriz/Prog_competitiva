// Problema "two buttons" - code force 520 B (https://codeforces.com/problemset/problem/520/B)
// Deu limite de memória excedido
// Esse problema provavelmente n foi feito para ser resolvido em grafo

#include<bits/stdc++.h>
using namespace std;

queue <pair<int,int>> fila;

int funcao(queue <pair<int, int>> fila , int m, int cont){ //BFS
    while (1){
        pair<int,int> elemento = fila.front();

        int n = elemento.first;
        if(n == m) return elemento.second;

        fila.push({n-1, elemento.second+1});
        fila.push({2*n, elemento.second+1});
        
        fila.pop();
    }
}

int main(){
    int n, m, cont=0;
    cin >> n >> m;
    fila.push({n,cont});

    int ans = funcao(fila, m, cont);
    cout << ans;
}
