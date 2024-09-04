#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s, sumPrefix[100002], cont=0;
    sumPrefix[0]=0;
    cin >> n >> s;

    for(int i=1; i<=n; i++){
        int val;
        cin >> val;
        sumPrefix[i] = val + sumPrefix[i-1];
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int sInterv = sumPrefix[i]-sumPrefix[j-1];
            if(sInterv == s) cont++;
        }
    }
    cout << cont;
}

//10  1   0  0  9  10   1  5
//10  11 11 11 20  30  31 36
//two pointer / sliding window .. ? algo assim