#include <iostream>
using namespace std;

//OBI 2012 N�vel 1 - Fase 1 - "CONSECUTIVOS"

int main()
{
    int n,v[10000],ant,seq = 1,seqM = 1;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> v[i];

        if(i>0) //verifica se n�o � o primeiro n�mero
        {
            if(ant == v[i]) // se for igual ao anterior
            {
                seq++;
            }
            else //se n�o for igual ao anterior
            {
                if(seq > seqM) // se formou uma sequencia maior do que a maior j� computada
                {
                    seqM = seq;
                }
                seq = 1; // zera a sequencia
            }
        }

        ant = v[i];
    }

    if(seq > seqM) //verifica se formou uma seuqencia no final maior do que a maior j� computada
    {
        seqM = seq;
    }

    cout << seqM << endl;

    return 0;
}
