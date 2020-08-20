#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 100010

int main(int argc, char const *argv[])
{ 
    int A, B, N, interruptor[MAX], qtde_dois = 0;

    cin >> N;
    A = B = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> interruptor[i];
        if (N % 2 == 1) A = 1;
        if (interruptor[i] == 2)  qtde_dois++;
    }
    if (qtde_dois % 2 == 1) B = 1;
    cout << A <<"\n"<< B <<endl;

    return 0;
}
