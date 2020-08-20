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
using namespace std; 

int main()
{
    int N;

    scanf("%d",&N);
    vector<int> campo(N);
    for (int i =0; i<N; i++)
        scanf("%d",&campo[i]);
    
    for (int i = 0; i < N; i++)
    {
        int quantidade = 0;//quantidade de minas...conta quantas tem!
        quantidade = quantidade + campo[i];
        if (i > 0) //se to dentro do limite eu somo
            quantidade = quantidade + campo[i-1];
        if (i < N-1) //senao estou na ultima posicao, ai soma a variavel campo
            quantidade = quantidade + campo[i+1];
        cout<< quantidade <<endl;
    }    
    return 0;
}