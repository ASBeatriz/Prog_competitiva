#include <bits/stdc++.h>
using namespace std;

#define MAXN 50005

int n;
string criancas[MAXN];
string idade[MAXN];

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        string nome;
        cin >> nome;
        criancas[i] = nome;
    }
    for(int i=0; i<n; i++){
        cin >> idade[i]; 
    }

    int pos = 0;
    for(int i=0; i<n; i++){
        cout << idade[pos];
        if(criancas[i] == idade[pos]){
            pos++;
        }
        if(i+1 < n) cout << " ";
    }

    return 0;
}