#include<bits/stdc++.h>
using namespace std;
double e,v;

int main(){
    cin >> e >> v;
    double v_min = v/60;
    double t_min = e/v_min;

    int min = (int)t_min%60;
    int horas = (int)t_min/60;

    //cout << horas << " " << min << endl;
    if(horas >= 5){
        horas = (horas-5)%24;
    }
    else horas += 19;

    if(horas < 10) cout << 0;
    cout << horas << ":";
    if(min < 10) cout << 0;
    cout << min;
}

/*
#include<bits/stdc++.h>
#define long long int int
using namespace std;
const int MAXN = 1e6;

int main(){
    int E, V;
    cin >> E >> V;
    double T;
    T = (double)E/V;
    T += 19.0;
    while(T>=24){
        T = T-24;
    }
    T = T*60*60;
    int H = 0;
    while(T >= 3600 ){
        H++;
        T = T-3600;
    }
    int M =0;
    while(T >= 60){
        M++;
        T = T - 60;
    }

    if(H-10 < 0){
        cout <<"0"<<H<<":";
    }else{
        cout<<H<<":";
    }

    if(M-10 < 0){
       cout <<"0"<<M<<endl;
    }else{
        cout<<M <<endl;
    }

    return 0;
}
*/