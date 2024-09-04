#include <bits/stdc++.h>
using namespace std;

int sum[1000000];

void adc(int u, int v, int val){
    for(int i=u-1; i<v; i++){
        sum[i]+= val;
    }
}

int main(){
    int n,k;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        sum[i] = 0;
    }

    for(int i=0; i<k; i++){
        int u,v,val;
        cin >> u >> v >> val;
        adc(u,v,val);
    }
    int maior = -100, s=0;
    for(int i=0; i<n; i++){
            s=0;
        for(int j=i; j<n; j++){
            s += sum[j];
            if(s > maior) maior = s;
        }
    }
    cout << maior;
}
