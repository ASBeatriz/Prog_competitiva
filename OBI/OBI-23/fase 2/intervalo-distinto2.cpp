// solução espelhada na solução do podio digital (https://www.youtube.com/watch?v=QkztAfXy4xw)

#include <bits/stdc++.h>
using namespace std;

int n, v[100010];
set <int> s; //set não permite elementos repetidos

int main(){
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int tam = 1, fim = 0, res = 0;
    s.insert(v[0]);
    for(int i=0; i<n; i++){
        while(!(s.count(v[fim+1])) && fim+1 < n){
            s.insert(v[fim+1]);
            fim++;
        }
        tam = fim-i+1;
        res = max(res, tam);
        s.erase(v[i]);
    }
    cout << res;

}