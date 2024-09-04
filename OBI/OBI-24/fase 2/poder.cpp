#include <bits/stdc++.h>
using namespace std;


int mat[1010][1010];

int dfs(int n, int m, int i, int j)
{
    if(mat[i+1][j] <= mat[i][j] && ((i+1) < n)){
        mat[i+1][j] += mat[i][j];
        mat[i][j] = 0;
        mat[i][j] = max(mat[i][j], dfs(n, m, i+1, j));
    }
    if(mat[i-1][j] <= mat[i][j] && ((i-1) >= 0)){
        mat[i][j] += mat[i-1][j];
        mat[i-1][j] = 0;
        mat[i][j] = max(mat[i][j], dfs(n, m, i-1, j));
    }
    if(mat[i][j+1] <= mat[i][j] && ((j+1) < m)){
        mat[i][j] += mat[i][j+1];
        mat[i][j+1] = 0;
        mat[i][j] = max(mat[i][j], dfs(n, m, i, j+1));
    }
    if(mat[i][j-1] <= mat[i][j] && ((i-1) >= 0)){
        mat[i][j] += mat[i][j-1];
        mat[i][j-1] = 0;
        mat[i][j] = max(mat[i][j], dfs(n, m, i, j-1));
    }
    return mat[i][j];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(((i+1) < n)){
                mat[i][j] = max(mat[i][j], dfs(n, m, i+1, j));
            }
            if(((i-1) >= 0)){
                mat[i][j] = max(mat[i][j], dfs(n, m, i-1, j));
            }
            if(((j+1) < m)){
                mat[i][j] = max(mat[i][j], dfs(n, m, i, j+1));
            }
            if(((i-1) >= 0)){
                mat[i][j] = max(mat[i][j], dfs(n, m, i, j-1));
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}