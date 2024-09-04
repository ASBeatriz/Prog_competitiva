#include <bits/stdc++.h>
using namespace std;

/* DEQUE
    Double-Ended Queue - fila de dupla extremidade
    Tem a mesma função do vector, com a adição de poder inserir e apagar elementos em ambas as extremidades.

    .push_front = add no inicio
    .push_back = add no final
    .pop_front = remove no inicio
    .pop_back = remove no final
*/

//imprime o deque
void imprimeDeque(deque <int> deq){
    
    // for(int x:deq){      // forma alternativa
    //     cout << x <<" ";   
    // }
    
    for(int i=0; i<deq.size(); i++){
        cout << deq.at(i) <<" ";    //acessa as posições por .at()
    }
    cout << endl;
}

int main(){
    deque <int> deq = {1, 2, 3, 4, 5};
    cout << "deq: ";
    imprimeDeque(deq);

    deq.push_back(10);
    deq.push_front(20);
    
    cout << "deq: ";
    imprimeDeque(deq);

    deq.pop_back();
    deq.pop_front();

    cout << "deq: ";
    imprimeDeque(deq);
}