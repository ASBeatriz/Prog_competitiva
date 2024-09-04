#include <iostream>
using namespace std;

int main()
{
    int N,T,I,J;
    int cima[100005], baixo[100005], par[100005];

    cin  >> N >> T;

    for(int i=0; i<N; i++)
    {
        cin >> cima[i];
        par[i] = 0;
    }
    for(int i=0; i<N; i++)
    {
        cin >> baixo[i];
    }

    for(int j=0; j<T; j++)
    {
        cin >> I >> J;
        for(int i= I-1; i < J; i++)
        {
            par[i]++;
        }
    }

    for(int i=0; i<N; i++)
    {
        if(par[i]%2 != 0)
        {
            cima[i] = baixo[i];
        }
        cout << cima[i] << " ";
    }
}
