#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,resp=0;
    vector <int>lista;
    scanf("%i",&n);

    for(int a=0;a<n;a++){
        int x;
        scanf("%i",&x);
        lista.push_back(x);
    }
    int i=0, j=n-1;
    int si = lista[i], sj = lista[j];
    while(i<j){
        if(si == sj){
            i++;
            j--;
            si = lista[i];
            sj = lista[j];
        }
        else if(si < sj){
            i++;
            si+=lista[i];
            resp++;
        }
        else{
            j--;
            sj+=lista[j];
            resp++;
        }
    }
    printf("%i",resp);
}
