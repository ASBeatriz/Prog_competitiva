#include<bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C1,C2,C3,resp;
    scanf("%i%i",&A,&B);
    C1 = 2*A - B;
    C2 = (A+B)/2;
    C3 = 2*B - A;
    resp = min(C1,C2);
    resp = min(resp,C3);
    printf("%i",resp);
}
