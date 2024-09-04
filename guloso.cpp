#include <bits/stdc++.h>
using namespace std;
/*
Alg Guloso:
Coin Change Problem:
    Achar o número mínimo de moedas (dos valores dados) que representa um valor V
    (Considera-se que há infinitas moedas de cada valor)

Interval Schedule Problem:
    Achar o máximo de tarefas que podem ser feitas dado seus intervalos de tempo na agenda
    res: a cada momento, verificar quem termina mais cedo (ordenar por ordem crescente de tempo de término)
    e ir adicionando os próximos com base no tempo de início deles (para n ter conflito).

Feras nas jaulas:
    ? (slide)
*/
int main(){
    //Troco (Algoritmo Guloso - Neps)
    int v, cont=0, moedas[] = {100, 50, 25, 10, 5, 1};
    cin >> v;
    for(int i=0; v>0;){
        if(v >= moedas[i]){
            v -= moedas[i];
            cont++;
        }
        else i++;
    }
    cout << cont;
}