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
#include <array>
#define MAX 105
using namespace std;

struct pais {
    int ouro, prata, bronze, id;
};

bool cmp(pais a, pais b)
{
    if (a.ouro != b.ouro) 
        return a.ouro > b.ouro;
    else if (a.prata != b.prata) 
        return a.prata > b.prata;
    else if (a.bronze != b.bronze) 
        return a.bronze > b.bronze;
    else 
        return a.id < b.id;
}

int main()
{
    int n, m, o, p, b;
    pais v[MAX];

    scanf("%d %d",&n, &m);//vetor em struct inicia do indice 0 sempre!
    for (int i = 0; i < n; i++)
    {
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze = 0;
        v[i].id = i+1;
    }

    for (int j = 0; j < m; j++)
    {
        scanf("%d %d %d", &o, &p, &b);
        //  [o-1] e [p-1] e [b-1] é por conta disso aqui:
        //  1<O<N   1<P<N   1<B<N  -> Os numeros o menor é 1 e o indice é zero por isso diminui 1
        v[o-1].ouro++;
        v[p-1].prata++;
        v[b-1].bronze++;
    }
    sort(v, v+n, cmp);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i].id);
    printf("\n");
    
    return 0;
}