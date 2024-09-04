#include <bits/stdc++.h>
using namespace std;

int v, a, f, p;


int main(){  
    int contas[3];
    int len = sizeof(contas)/sizeof(int);

    cin >> v >> contas[0] >> contas[1] >> contas[2];
    sort(contas, contas+len);

    int cont=0;
    for(int i=0; i<3; i++){
        if(v-contas[i] >= 0){
            v-=contas[i];
            cont++;
        }
    }
    cout << cont;
}