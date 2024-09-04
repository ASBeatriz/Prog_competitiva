#include <bits/stdc++.h>
using namespace std;

int alf[130];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(int i=0; i<130; i++){
        alf[i] = 0;
    }

    int n, k;
    cin >> k >> n;

    string s;
    cin >> s;

    for(int i=0; i<(int)s.size(); i++){
        char a = s[i];
        int na = (int)a;
        alf[na] = 1;
    }
    

    char ans = 'S';
    string s2;
    cin >> s2;
    for(int i=0; i<(int)s2.size(); i++){
        char a = s2[i];
        int na = (int)a;
        if(alf[na] == 0){
            ans = 'N';
            break;
        }
    }
    
    cout << ans << endl;
    
    //cout << (int)'a' << " "<< (int)'z' << " " << (int)'A' << " " << (int)'Z'  << " " << (int)'0' << " " << (int)'9'  << " " << (int)'+' << " " << (int)'-' << " "  << (int)'*' << " "  << (int)'/' << " "  << (int)'#' << " "  << (int)'!' << " " ;  
}