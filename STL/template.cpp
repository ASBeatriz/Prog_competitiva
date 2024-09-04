#include<bits/stdc++.h>
using namespace std;

/* TEMPLATE
    São modificadores de structs e funções.
    Generalizam o tipo da função, evitando código replicado. 
*/

template <typename tp> 

//consigo utilizar para int, float, double, ...
tp comparar (tp num1, tp num2){ 
    if(num1 >= num2) return num1;
    else return num2;
}

int main(){
    int a1 = 2, a2 = 4;
    float b1 = 3.45, b2 = 5.12;
    double c1 = 5.555556, c2 = 7.2333333;

    cout << "o maior eh: " << comparar(a1, a2) << endl;
    cout << "o maior eh: " << comparar(b1, b2) << endl;
    cout << "o maior eh: " << comparar(c1, c2) << endl;
}