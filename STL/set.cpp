// (https://noic.com.br/materiais-informatica/curso/data-structures-guide/set/)
#include <bits/stdc++.h>
using namespace std;

/* SET
    Conjunto (""array"") que guarda os elementos de maneira ORDENADA.
    Não permite elementos repetidos e não ocupa posições contíguas na memória como em um vetor.

    .insert(elem): add o valor elem no set em O(log n)
    .erase(elem): apaga o elemento elem
    .begin(): retorna um ponteiro que aponta para o inicio do set, em O(1)
    .end(): retorna um ponteiro que aponta para o fim do set, em O(1)
    .empty(): retorna um valor booleano, que indica se o set está ou não vazio, em O(1)
    .size(): retorna quantidade de elementos do set, em O(1)
    .clear(): remove todos os elementos do set, em O(n)
    ...
*/

void imprimir(set <int> s){
    set<int>::iterator i; //iterator

    for(i = s.begin(); i != s.end(); i++){
        cout << *i << " ";
    }
}

int main(){
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(12);
    s.insert(2);
    s.insert(10); //não permite elementos repetidos
    s.insert(10);
    s.insert(10);
    // s = 2, 3, 5, 10, 12

    imprimir(s);

    // .find(x) retorna um ponteiro para x se existir ou um ponteiro para o fim caso contrário.
    if(s.find(12) != s.end()){
        cout << "\nachei";
    }
    else{
        cout << "\nnao achei";
    }
    cout << endl;

    // ACESSANDO OS ELEMENTOS (utilizar itetator e iterar)
    set <int>::iterator it;
    it = s.begin();
    int n = 4;      //posição a ser acessada
    for(int i=0; i<n; i++) it++;

    cout << *it << endl;

    // apagando um elemento
    s.erase(5);
    imprimir(s);

    s.clear(); // O(log n)
    for(int i2:s){
        cout << i2 << " ";
    }

    cout << "\n";
    cout << (s.empty() ? "vazio" : "nao vazio");    //verifica se está vazio
}