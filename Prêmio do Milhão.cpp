#include <iostream>
#include <cstdio>
using namespace std;

#define UM_MILHAO 1000000

int main(int argc, char const *argv[])
{ 
    int N, i, valor, ans, soma = 0;

    cin >> N;
    ans = 0;
    for (int i=0; i<N; i++)
    {
        cin >> valor;
        soma = soma + valor;
        if (soma >= UM_MILHAO && ans == 0)
            ans = i+1;
    }
    cout<< ans <<endl;

    return 0;
}