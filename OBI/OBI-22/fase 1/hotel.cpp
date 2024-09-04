//obi senior - fase 1 - 2022
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, a, dia, res;
    cin >> d >> a >> dia;
    // dia = 2 -> (d+a)(31-1 = 30)
    // dia  = 3 -> (d+2a)(31-2 = 29)
    // ...
    // dia = 15 -> (d+14a)(31-14)
    //dia = 16 -> (d+14a)(31-15)
    // ...
    int acres = (dia >= 16)? a*14 : a*(dia-1);

    res = (d+acres)*(32-dia);
    
    cout << res;

}