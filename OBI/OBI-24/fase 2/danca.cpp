//para subtarefa 3, mas deu errado ??
#include <bits/stdc++.h>
using namespace std;

int l, c, p, vLin[1000010];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> l >> c >> p;
    int mt[l][c];

    for(int i=1; i<=l; i++){
        vLin[i] = i;
    }

    int cont=1;
    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            mt[i][j] = cont;
            cont++;
        }
    }

    int contC=0;
    for(int i=0; i<p; i++){
        char pas;
        cin >> pas;
        int n1, n2;
        cin >> n1 >> n2;
        if(pas == 'C'){
            // for(int lin=0; lin<l; lin++){
            //     //troca de colunas
            //     int g = mt[lin][n1-1];
            //     mt[lin][n1-1] = mt[lin][n2-1];
            //     mt[lin][n2-1] = g;
            // }
            contC++;
        }
        else{
            // for(int col=0; col<c; col++){
            //     //troca de linhas
            //     int g = mt[n1-1][col];
            //     mt[n1-1][col] = mt[n2-1][col];
            //     mt[n2-1][col] = g;
            // }
            vLin[n1] = n2;
            vLin[n2] = n1;
        }
    }

    for(int i=0; i<l; i++){
        mt[i][0] = (vLin[i+1])*2 - 1;
        mt[i][1] = (vLin[i+1])*2;
    }

        // IMPRIME MATRIZ
    for(int i=0; i<l; i++){
        if((contC % 2) == 0){
            for(int j=0; j<2; j++){
                cout << mt[i][j] << " ";
            }
        }
        else{
            for(int j=1; j>=0; j--){
                cout << mt[i][j] << " ";
            }
        }
        cout << endl;
    }
}