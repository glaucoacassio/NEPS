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
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#define MAX 1000
int m[MAX][MAX];

int main () 
{
    int s, n, p;

    scanf(" %d",&n);
    //leio os valores
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)
        scanf(" %d",&m[i][j]);

    //pego a soma da primeira linha
    s = 0;
    for (int i=0; i<n; i++)
        s += m[0][i];

    //verifico as linhas
    for (int i=1; i<n && s != -1; i++)
    {
        p=0;
        for (int j=0; j<n; j++)
            p+= m[i][j];
        if (p != s) s = -1;
    }

    //verifico as colunas
    for (int j=0; j<n && s != -1; j++)
    {
        p=0;
        for (int i=0; i<n; i++)
            p+= m[i][j];
        if (p != s) s = -1;
    }

    //verifico a diagonal principal
    p=0;
    for (int i=0; i<n && s != -1; i++)
        p+= m[i][i];
    if (p != s) s = -1;
    
     //verifico a diagonal secundaria
     p=0;
    for (int i=0; i<n && s != -1; i++)
        p+= m[i][n - i - 1];
    if (p != s) s = -1;

    printf("%d\n", s);

    return 0;
}