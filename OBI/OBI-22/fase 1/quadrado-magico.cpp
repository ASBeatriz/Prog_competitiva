//Quadrado Mágico - OBI Sênior - Fase 1 - 2022
// obs: essa resolução não verifica a soma para achar o número. Ela admite como verdade que os numeros do quadrado variam apenas entre 1 e n^2. (resolução yt)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, lin, col, vet[101];
    for(int i=0; i<101; i++) vet[i] = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int val;
            cin >> val;
            if(val == 0){
                lin = i+1;
                col = j+1;
            }
            else vet[val] = 1;
        }
    }
    for(int i=1; i<n*n; i++){
        if(!vet[i]){
            cout << i << endl;
            break;
        }
    }
    cout << lin << endl;
    cout << col << endl;
}