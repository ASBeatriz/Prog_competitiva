#include <bits/stdc++.h>
using namespace std;

/* VECTOR
    Array de tamanho variável

    .push_back = add no final
    .pop_back = remove no final
    .at(pos) = retorna o valor na posição pos
    .insert(pos, val) = add o valor (ou lista) val na posição pos
*/

//imprime o vector
void imprimeVector(vector <int> vec){
    
    // for(int x:vec){      // forma alternativa
    //     cout << x <<" ";   
    // }
    
    for(int i=0; i<vec.size(); i++){
        cout << vec.at(i) <<" ";    //acessa as posições por .at()
    }
    cout << endl;
}

int main (){
    vector <int> vec1; // vector vazio
    cout << "vec1 : ";
    imprimeVector(vec1);

    vector <int> vec2(10); // inicializa com dez 0's
    cout << "vec2 : ";
    imprimeVector(vec2);

    vector <int> vec3(7, 5); // inicializa com sete 5's
    cout << "vec3 : ";
    imprimeVector(vec3);

    vector <int> vec4 = {1, 2, 3, 4, 5}; // inicializa com uma lista definida
    cout << "vec4 : ";
    imprimeVector(vec4);

    vec1.push_back(11);
    vec1.push_back(22);
    vec1.push_back(33);
    // vec1 : 11, 22, 22
    //     front     back

    cout << "vec1 : ";
    imprimeVector(vec1);
    
    vec1.pop_back(); //remove a ultima posição
    cout << "vec1 : ";
    imprimeVector(vec1);

    vec1.insert(vec1.begin(), 5); //adiciona no inicio do vector
    cout << "vec1 : ";
    imprimeVector(vec1);

    vec1.insert(vec1.begin(), {10, 20, 30});
    cout << "vec1 : ";
    imprimeVector(vec1);
}