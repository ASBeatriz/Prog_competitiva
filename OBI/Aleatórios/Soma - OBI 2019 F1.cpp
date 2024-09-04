#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,sa[500010], res=0;
    map <int,int> qtde;
    qtde[0] = 1;
    sa[0] = 0;

    scanf("%i %i",&n,&s);
    for(int i=1; i<=n; i++){
        int x;
        scanf("%i",&x);
        sa[i] = sa[i-1] + x;
        if(sa[i] >= s){
            res += qtde[sa[i]-s];
        }
        qtde[sa[i]]++;
    }
    printf("%i",res);
}
