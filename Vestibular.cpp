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
    string gabarito, gabarito_candidato;
    int n, pontos;

    while(cin >> n)
    {
        pontos = 0;
        cin >> gabarito >> gabarito_candidato;
        for (int i=0; i<gabarito.size(); ++i)
            if (gabarito[i] == gabarito_candidato[i]) pontos++;
        cout<<pontos<<endl;
    }
    return 0;
}