#include <bits/stdc++.h>
using namespace std;

/* QUEUE (fila)
    FIFO = First In, First Out / Primeiro a entrar, primeiro a sair

    Elementos INSERIDOS no FIM
    e REMOVIDOS no INÍCIO

    .push = add no fim
    .pop = remove o primeiro
    .front = retorna o primeiro da fila
*/

//imprime a fila
void imprimeFila(queue <int> fila){
    while(!fila.empty()){
        cout << fila.front() << " "; //imprime o primeiro elemento e tira ele
        fila.pop();
    }
    cout << endl;
}

int main (){
    queue <int> fila1;
    fila1.push(5);
    fila1.push(10);
    fila1.push(15);
    // fila1 = 5, 10, 15

    cout << "fila1: ";
    imprimeFila(fila1);
    cout << "fila1.size(): "<< fila1.size() << endl;

    cout << "fila1.front(): " << fila1.front() << endl;
    cout << "fila1.back(): " << fila1.back() << endl;

    queue <int> fila2;
    fila2.push(1);
    fila2.push(2);
    cout << "fila2: ";
    imprimeFila(fila2);

    fila1.swap(fila2); //swap() : troca os valores das filas 
    cout << "\n--- apos swap ---\n";

    cout << "fila1: ";
    imprimeFila(fila1);

    cout << "fila2: ";
    imprimeFila(fila2);
}