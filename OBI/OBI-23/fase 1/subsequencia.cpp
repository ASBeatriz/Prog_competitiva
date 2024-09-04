#include<bits/stdc++.h>
using namespace std;
#define MAXVAL 100000005
#define MAXN 100005

int n, m;
vector<long int> sub;
pair <int, int> ocorrPOS[MAXVAL];
pair <int, int> ocorrNEG[MAXVAL];


int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a<0) ocorrNEG[-a]={1,i};
        else ocorrPOS[a]={1,i};
    }

    int isSub = 1;
    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        if(a < 0){
            if(!ocorrNEG[-a].first){
                isSub = 0;
                break;
            }
            sub.push_back(a);
        }
        else{
            if(!ocorrPOS[a].first){
                isSub = 0;
                break;
            }
            sub.push_back(a);
        }
    }

    if(isSub){
        int a=0;
        for(int i=0; i<m-1; i++){
            int elem = sub[i];
            int next = sub[i];
            int pos1 = elem<0 ? ocorrNEG[elem].second : ocorrPOS[elem].second;
            int pos2 = next<0 ? ocorrNEG[next].second : ocorrPOS[next].second;
            if(pos1 > pos2){
               a = 1;
               break; 
            }
        }
        if(a) cout << 'N';
        else cout << 'S';
    }
    else cout << 'N';


}