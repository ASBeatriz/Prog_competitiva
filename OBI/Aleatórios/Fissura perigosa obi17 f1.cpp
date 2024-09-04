// Resolução da questão "Fissura Perigosa" com DFS

#include <bits/stdc++.h>
using namespace std;

#define MAXN 501
int n,f;
string matriz[MAXN];

int pos(int l, int c)
{
    char num = matriz[l][c];
    int res = (num-'0');
    return res;
}

void dfs(int f, int l=0, int c=0)
{
    if((pos(l,c) <= f)&&(matriz[l][c] != '*'))
    {
        matriz[l][c] = '*';
        if(l>0) dfs(f,l-1,c);
        if(l<n-1) dfs(f,l+1,c);
        if(c>0) dfs(f,l,c-1);
        if(c<n-1) dfs(f,l,c+1);
    }
}

int main(){
	cin >> n >> f;

	for(int i=0; i<n; i++)
    {
        cin >> matriz[i];
    }

    dfs(f,0,0);

    for(int i=0; i<n; i++)
    {
        cout << matriz[i] << endl;
    }


	return 0;
}
