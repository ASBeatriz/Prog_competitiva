#include <bits/stdc++.h>
using namespace std;
int vl[100010];
int vc[100010];

void verificar(int x1, int y1, int x2, int y2){
    bool respx = 1, respy = 1;
    for(int i=x1; i<=x2; i++){
        if(vc[i] == 0){
            respx = 0;
            break;
        }
    }
    for(int i=y1; i<=y2; i++){
        if(vl[i] == 0){
            respy = 0;
            break;
        }
    }
    if(respx && respy) cout << 'S';
    else cout << 'N';
}

int main(){
    // n -> vl; m -> vc;
    int n,m,qs;
    cin >> n >> m;
    int maior = max(n,m);
    for(int i=0; i<maior; i++){
        vl[i]=0;
        vc[i]=0;
    }

    cin >> qs;
    for(int i=0; i<qs; i++){
        char q;
        cin >> q;
        if(q == 'Q'){
            int x1,y1,x2,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            verificar(x1,y1,x2,y2);
        }
        else{
            int x,y;
            cin >> x >> y;
            if(q == 'A'){
                vl[y] = 1;
                vc[x] = 1;
            }
            else{
                vl[y] = 0;
                vc[x] = 0;
            }

            for(int k=1; k<=m; k++) cout << vc[k] << " ";
            cout << endl;
            for(int l=1; l<=n; l++) cout << vl[l] << " ";
        }
    }
}
