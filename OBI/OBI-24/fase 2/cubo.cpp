#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n;
    int nZero, nUm = ((n-2)*(n-2))*6, nDois = (n-2)*12, nTres = 8;
    nZero = (n*n*n) - nUm - nDois - nTres;

    cout << nZero << endl;
    cout << nUm << endl;
    cout << nDois << endl;
    cout << nTres << endl;
}