//feito com base na solução k

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000010;
int E, M, D, res=0, paresJun[MAX][2], paresSep[MAX][2], grupo[MAX];

int main(){
    //M = pares gostariam, D = pares não gostariam

    cin >> E >> M >> D;

    for(int i=0; i<M; i++){ //armazena pares que querem estar juntos
        int x, y;
        cin >> x >> y;
        paresJun[i][0] = x;
        paresJun[i][1] = y;
    }
    for(int i=0; i<D; i++){ //armazena pares que querem estar separados
        int x, y;
        cin >> x >> y;
        paresSep[i][0] = x;
        paresSep[i][1] = y;
    }
    for(int i=0; i<E/3; i++){ //atribui um id a cada pessoa com o numero de seu grupo
        int x, y, z;
        cin >> x >> y >> z;
        grupo[x] = grupo[y] = grupo[z] = i;
    }

    //fazer verificação de infrações
    for(int i=0; i<M; i++){ 
        if (grupo[paresJun[i][0]] != grupo[paresJun[i][1]]) res++;
    }
    for(int i=0; i<D; i++){ 
        if (grupo[paresSep[i][0]] == grupo[paresSep[i][1]]) res++;
    }

    cout << res;
}