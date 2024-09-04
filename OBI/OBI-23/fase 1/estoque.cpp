#include <bits/stdc++.h>
using namespace std;

#define MAX 500

int l, c, p, cont, mat[MAX][MAX];

void ler_matriz(){
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            cin >> mat[i][j];
        }
    }
}

int main(){
    cin >> l >> c;
    ler_matriz();
    cin >> p;

    for(int i=0; i<p; i++){
        int a,b;
        cin >> a >> b;
        if(mat[a-1][b-1]){
            mat[a-1][b-1]--;
            cont++;
        }
    }

    cout << cont;
}