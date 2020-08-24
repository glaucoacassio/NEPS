/*

Observacao:
- Se voce pegar esse mesmo codigo e rodar no site do URI, vai dar resposta errada ou erro de apresentacao(nao sei o porque), 
hoje é dia 23/08/2020(ate o moemnto da isso),no site da OBI e do NEPS roda perfeito mas la dar esse problema, talvez seja 
algum bug ou casos de teste que nao tentei. 
Estranho dar problema ja que ate o enunciado esta igual(sim, eu li e reli pra ter certeza se tinha mudado algo), como hoje to sem paciencia
nao vou ficar buscando chifre na cabeça de cavalo...
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char *argvs[])
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int a[3][3], soma = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> a[i][j];

    for (int i = 0; i < 3; ++i)
        if ((a[i][0] == 0) + (a[i][1] == 0) + (a[i][2] == 0) == 0)
            soma = a[i][0] + a[i][1] + a[i][2];

    for (int j = 0; j < 3; ++j)
        if ((a[0][j] == 0) + (a[1][j] == 0) + (a[2][j] == 0) == 0)
            soma = a[0][j] + a[1][j] + a[2][j];

    if ((a[0][0] == 0) + (a[1][1] == 0) + (a[2][2] == 0) == 0)
        soma = a[0][0] + a[1][1] + a[2][2];

    if ((a[0][2] == 0) + (a[1][1] == 0) + (a[2][0] == 0) == 0)
        soma = a[0][2] + a[1][1] + a[2][0];

    if (soma == 0)
    {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                soma += a[i][j];
        soma /= 2;
    }

    for (int tentativas = 0; tentativas < 3; ++tentativas)
    {
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
            {

                /*Testa mesma linha*/
                if ((a[i][j] == 0) && (a[i][0] == 0) + (a[i][1] == 0) + (a[i][2] == 0) == 1)
                    a[i][j] = soma - a[i][0] - a[i][1] - a[i][2];

                /*Testa mesma coluna*/
                if ((a[i][j] == 0) && (a[0][j] == 0) + (a[1][j] == 0) + (a[2][j] == 0) == 1)
                    a[i][j] = soma - a[0][j] - a[1][j] - a[2][j];
            }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << a[i][j] << " ";
        cout<<endl;
    }

    return 0;
}
