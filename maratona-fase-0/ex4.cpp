#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000001
int b,n;
int vetor[MAXN], somas2[MAXN];
int somas[MAXN];

int main(){
    cin >> b >> n;
    int qtd = b*n;
    string vet;
    cin >> vet;

    for(int i=0; i< qtd; i++){
        vetor[i] = (int)vet[i]-48;
    }

    int k=0;
    for(int i=0; i<=qtd-n; i+=n){
        int sum = 0;
        for(int p=i; p<i+n; p++){
            sum += vetor[p];
            // cout << "p :" << p;
            // cout << "sum: " << sum << " " << endl;
            somas[k++] = sum;
        }
    }

    cout << "\nsomas" << endl;
    for(int j=0; j<k; j++){
        cout << somas[j] << " ";
    }

    for(int a=n; n<qtd; n++){ //percorre de n à qtd

        cout << "\nsomas" << endl;
        for(int j=0; j<k; j++){
        cout << somas[j] << " ";
    }
        for(int i=0; i<k; i++){ //percorre somas
            //compara
            for(int j=0; j<k; j++){
                somas2[j] = somas[j];
            }
            sort(somas2, somas2+k);

            for(int z=0; z<k; z++){
                if(somas2[z] == somas2[z+1]){
                    cout << 'N';
                    return 0;
                }
            }
        }
        //modifica as somas
        for(int i=0; i<k; i++){
            if(i==k-1) somas[i] = somas[i] - vetor[i*n] + vetor[qtd%((i+1)*n)];
            else somas[i] = somas[i] - vetor[i*n] + vetor[(i+1)*n];
        }

    }

    cout << 'S';
}