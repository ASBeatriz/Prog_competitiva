#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    string pn, pm;
    cin >> n >> pn >> m >> pm;

    int maior = (m > n)? n : m;
    int res = 0;
    for (int i=0; i<maior; i++){
        if(pn[i] == pm[i]) res++;
        else break;
    }
    cout << res;

}