//DEU seg fault??

#include <bits/stdc++.h>
using namespace std;

int ap[100010];

void limparAp(){
    for(int i=0; i<100010; i++) ap[i] = 0;
}

int main(){
    limparAp();
    int n, v[100010], res=1;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ap[v[0]]++;
    int tam = 1, fim = 0;

    //cout << endl;
    for(int i=0; i<n; i++){
        while(ap[v[fim+1]] == 0 && fim+1 < n){
            ap[v[fim+1]]++;
           //cout << v[fim+1] << " ";
            fim++;
        }
        tam = fim-i+1;
        res = max(res, tam);
        //cout << "\ntam: " << tam << endl;
        ap[v[i]]--;
    }
    cout << res;

    // int fim=0, tam = 1;
    // ap[v[0]] = 1;

    // for(int i=0; i<n-1; i++){
    //     cout << "tam: " << tam << endl;
    //     cout << "seq: " << v[i] << " ";

    //     for(int j=fim+1; j<n; j++){
            
    //         if(ap[v[j]] > 0){
    //             cout << "\nbreak\n";
    //             fim = j;
    //             ap[v[i]]--;
    //             break;
    //         }
    //         else{
    //             cout << v[j] << " ";
    //             ap[v[j]]++;
    //             tam++;
    //         }
    //     }
    //     cout << "tam: " << tam << endl;
    //     if(tam > res) res = tam;
    //     //limparAp();
    // }

}