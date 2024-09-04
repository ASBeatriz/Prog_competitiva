#include<bits/stdc++.h>
using namespace std;

#define MAXN 100005
int n, m;
vector<int> ponte[MAXN];

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(a){
            ponte[b].push_back(c);
            ponte[c].push_back(b);
        }
        else{
            int temPonte=0;
            for(int i=0; i<ponte[b].size(); i++){
                int elem = ponte[b][i];
                if(elem == c) temPonte=1;
            }
            cout << temPonte << endl;
        }
    }
}