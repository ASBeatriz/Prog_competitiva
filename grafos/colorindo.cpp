#include <bits/stdc++.h>
using namespace std;

const int MAXN = 201;
int mat[MAXN][MAXN];

int main(){
    int l, c, x, y, k;

    for(int i=0; i<MAXN; i++)
        for(int j=0; j<MAXN; j++)
            mat[i][j] = 0;

    cin >> l >> c >> x >> y >> k;

    for(int i=0; i<k; i++){
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
    }
    queue <pair<int, int>> fila;

    fila.push({x,y});
    int cont=0;
    while(!fila.empty()){
        int elemx = fila.front().first;
        int elemy = fila.front().second;

        if(mat[elemx][elemy]){
            fila.pop();
            continue;
        }
        mat[elemx][elemy] = 1;
        cont++;
        fila.pop();
        //bfs:
        if(mat[elemx+1][elemy+1] == 0 && (elemx+1 <= l) && (elemy+1 <= c)) fila.push({elemx+1, elemy+1});

        if(mat[elemx+1][elemy] == 0 && (elemx+1 <= l)) fila.push({elemx+1, elemy});

        if(mat[elemx][elemy+1] == 0 && (elemy+1 <= c)) fila.push({elemx, elemy+1});

        if(mat[elemx-1][elemy-1] == 0 && (elemx-1 >= 1) && (elemy-1 >= 1)) fila.push({elemx-1, elemy-1});

        if(mat[elemx-1][elemy] == 0 && (elemx-1 >= 1)) fila.push({elemx-1, elemy});

        if(mat[elemx][elemy-1] == 0 && (elemy-1 >= 1)) fila.push({elemx, elemy-1});

        if(mat[elemx+1][elemy-1] == 0 && (elemx+1 <= l) && (elemy-1 >= 1)) fila.push({elemx+1, elemy-1});

        if(mat[elemx-1][elemy+1] == 0 && (elemx-1 >= 1) && (elemy+1 <= c)) fila.push({elemx-1, elemy+1});
    }

    cout << cont;
}