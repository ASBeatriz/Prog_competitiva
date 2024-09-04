#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   for(int i=0; i<n; i++){
      float val;
      cin >> val;
      cout << fixed << setprecision(4);
      // cout.precision(4);
      // cout << fixed;
      cout << sqrt(val) << endl;
   }
}