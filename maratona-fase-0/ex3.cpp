#include<bits/stdc++.h>
using namespace std;
#define MAXN 500

int n,m,x,y;
char mat[MAXN][MAXN];
int valmat[MAXN][MAXN];


int main(){
    cin >> n >> m;
    cin >> x >> y;
    x--;
    y--;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == '*') valmat[i][j] = -1;
        }
    
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            if(mat[i][j] == '*'){
                if((i+x <= n) && (j+y <= m) && (mat[i+x][j+y] == '.')) valmat[i+x][j+y]++;
                if((i+x <= n) && (j-y >= 0) && (mat[i+x][j-y] == '.')) valmat[i+x][j-y]++;
                if((i+y <= n) && (j+x <= m) && (mat[i+y][j+x] == '.')) valmat[i+y][j+x]++;
                if((i+y <= n) && (j-x >= 0) && (mat[i+y][j-x] == '.')) valmat[i+y][j-x]++;
                if((i-x >= 0) && (j-y >= 0) && (mat[i-x][j-y] == '.')) valmat[i-x][j-y]++;
                if((i-x >= 0) && (j+y <= m) && (mat[i-x][j+y] == '.')) valmat[i-x][j+y]++;
                if((i-y >= 0) && (j-x >= 0) && (mat[i-y][j-x] == '.')) valmat[i-y][j-x]++;
                if((i-y >= 0) && (j+x <= m) && (mat[i-y][j+x] == '.')) valmat[i-y][j+x]++;
            }
        }

    int ansx, ansy, max=-1;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++){
            if(valmat[i][j] > max){
                max = valmat[i][j];
                ansx = i;
                ansy = j;
            }
        }
    
    cout << ansx+1 << " " << ansy+1 << endl;

    // cout << endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout << valmat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}