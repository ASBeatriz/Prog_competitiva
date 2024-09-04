#include <bits/stdc++.h>
using namespace std;

#define MAX 100010
int lista[MAX], cont[MAX];
long long int freq[10];

int main()
{
    int N,M;
    scanf("%i%i",&N,&M);

    cont[0] = 0;
    int last = 1;
    cont[last]++;
    cont[last+1]--;

    for(int i=1; i<=N; i++){
        scanf("%i",&lista[i]);
    }
    for(int i=0;i<M;i++){
        //cont[last]--;
        int next;
        scanf("%i",&next);

        if(next > last){
            cont[last+1]++;
            cont[next+1]--;
        }
        else{
            cont[next]++;
            cont[last]--;
        }
        last = next;
    }
    /*for(int i=0; i<=N; i++){
        printf("%i ",cont[i]);
    }
    printf("\n");
    for(int i=1; i<=N; i++){
        cont[i] += cont[i-1];
        freq[lista[i]] += cont[i];
        printf("%i ",cont[i]);
    }
    printf("\n");*/
    for(int i=0; i<10; i++){
        printf("%i ",freq[i]);
    }
}
