#include<bits/stdc++.h>
using namespace std;

int sp[26][100010];

vector<int> divisores(int n){
    vector<int> result;
    result.push_back(1);

    for(int i=2;i*i <= n;i++){
        if(n%i == 0){
            result.push_back(i);
            result.push_back(n/i);
        }
    }
    sort(result.begin(),result.end());
    return result;
}
bool verif(int n,int d){
    int qtd[26];
    for(int i=0; i<26; i++){
        qtd[i] = sp[i][d];
    }
    for(int i=0;i<26;i++){
        for(int a=2*d; a<=n; a+=d){
            if(sp[i][a] - sp[i][a-d] != qtd[i]) return false;
        }
    }
    return 1;
}

int main(){
    int n;
    string palavra;
    cin >> n >> palavra;
    vector <int> div = divisores(n);

    for(int i=0;i<26;i++){
        sp[i][0] = 0;
        for(int j=1;j<=n;j++){
            sp[i][j] = sp[i][j-1]+(palavra[j-1] == 'a'+i);
        }
    }
    int k;
    bool s=false;
    for(k=0;k<div.size();k++){
        if(verif(n,div[k]) == 1){
            s=true;
            cout << palavra.substr(0,div[k]);
            break;
        }
    }
    if(!s){
        cout << '*';
    }
}
