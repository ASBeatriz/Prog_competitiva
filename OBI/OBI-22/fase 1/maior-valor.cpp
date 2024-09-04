///Maior Valor - OBI Sênior - Fase 1 - 2022
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s, res=-1;
    cin >> n >> m >> s;

    for(m; m>=n; m--){
        int i = m, sum=0;
        while(i>0){
            int r = i%10;
            sum += i%10;
            i /= 10;
        }
        if(sum == s){
            res = m;
            break;
        }
    }    
    cout << res;
}