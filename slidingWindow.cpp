#include <bits/stdc++.h>
using namespace std;
//resolver problema 363 B "Fence" do Codeforces
int main(){
    int n, k, v[150001], minS=0, id=0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if(i<k) minS+= v[i];
    }
    int s = minS;
    for(int i=1, j=k; j<n; i++, j++){
        s = s - v[i-1] + v[j];
        if(s < minS){
            minS = s;
            id = i;
        }
    }
    cout << id+1;
}