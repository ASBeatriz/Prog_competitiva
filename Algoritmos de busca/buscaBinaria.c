#include <stdio.h>

// achar a posição do número dado
int busca_binaria(int vetor[],int n, int x){
    int meio, ini = 0, fim = n-1;
    while(ini <= fim){
        meio = (ini+fim)/2;
        if(vetor[meio] < x){
            ini = meio + 1;
        }
        else if(vetor[meio] > x){
            fim = meio - 1;
        }
        else return meio;
    }
    return -1; //caso de não achar
}

// Um caso de busca binária.
// achar a posição do menor número maior ou igual ao número dado (x)  //  achar o menor n >= x
int lower_bound(int vetor[], int n, int x){
    int meio, ini = 0, fim = n-1;
    int ans = -1;
    while(ini <= fim){
        meio = (ini+fim)/2;
        if(vetor[meio] >= x){   //possível solução
            ans = meio;
            fim = meio - 1;
        }
        else{
            ini = meio + 1;
        }
    }
    return ans; //caso de não achar
}

int main(){
    int v[] = {1, 3, 4, 7, 10, 13, 20, 24}; 
    int elem1 = 20, elem2 = 9, qtd = 8;

    printf("O elemento %d, esta na posicao %d\n", elem1, busca_binaria(v, qtd, elem1));
    printf("O menor elemento >= %d, esta na posicao %d\n", elem2, lower_bound(v, qtd, elem2));
}