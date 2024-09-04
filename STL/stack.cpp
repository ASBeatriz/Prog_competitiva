#include <bits/stdc++.h>
using namespace std;

/* STACK (pilha)
    LIFO = Last In, First Out / Último a entrar, Primeiro a sair

    Elementos INSERIDOS no TOPO
    e REMOVIDOS no TOPO 

    .push = add no topo
    .pop = remove do topo 
    .top = retorna o ultimo colocado (o topo)
*/

// imprime os elementos do stack 
void imprimePilha(stack <int> stack){
    while(!stack.empty()){
        cout << stack.top() << " "; //imprime o topo e tira ele
        stack.pop();
    }
    cout << endl;
}

int main (){
    stack <int> stack1;

    cout << ((stack1.empty())? "vazio\n" : "nao vazio\n"); //verifica se está vazio

    stack1.push(1); 
    stack1.push(2);
    stack1.push(3);
    //stack1 = 3, 2, 1
    cout << "stack1.size(): " << stack1.size() << endl;   //retorna a quantidade de elemetos

    cout << "stack1: "; 
    imprimePilha(stack1);

    stack <int> stack2; 
    stack2.push(4);
    stack2.push(5);
    //stack2 = 5, 4

    cout << "stack2: "; 
    imprimePilha(stack2);

    stack2.swap(stack1); //swap() : troca os valores dos stacks
    cout << "\n--- apos swap ---\n";

    //imprime stack 1
    cout << "stack1: ";
    imprimePilha(stack1);
    //imprime stack 2
    cout << "stack2: ";
    imprimePilha(stack2);
}