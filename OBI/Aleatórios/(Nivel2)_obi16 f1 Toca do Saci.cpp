#include <bits/stdc++.h>
using namespace std;

int qtdl, qtdc, matriz[1001][1001], posl, posc;

int dfs(int l, int c, int cont)
{
    if(matriz[l][c] == 3) return cont;

    matriz[l][c] = 0;
    int cima = matriz[l-1][c];
    int baixo = matriz[l+1][c];
    int direita = matriz[l][c+1];
    int esquerda = matriz[l][c-1];

    //cout << l << " " << c << endl;
    if((l>0)&&(cima != 0))
    {
        //cout << "cima\n";
        return dfs(l-1,c,cont+1);
    }
    else if((l<qtdl-1)&&(baixo != 0))
    {
        //cout << "baixo\n";
        return dfs(l+1,c,cont+1);
    }
    else if((c<qtdc-1)&&(direita != 0))
    {
        //cout << "direita\n";
        return dfs(l,c+1,cont+1);
    }
    else if((c>0)&&(esquerda != 0))
    {
        //cout << "esquerda\n";
        return dfs(l,c-1,cont+1);
    }
    else
    {
        //cout << "beco sem saida\n";
        return dfs(posl,posc,1);
    }
}

int main(){
	cin >> qtdl >> qtdc;

	for(int i=0; i<qtdl; i++)
        for(int j=0; j<qtdc; j++)
        {
            int id;
            cin >> id;
            matriz[i][j] = id;
            if (id == 2)
            {
                posl = i;
                posc = j;
            }
        }

	cout << dfs(posl,posc,1);

	return 0;
}
