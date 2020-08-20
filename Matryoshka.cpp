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
#define MAX 100005
using namespace std;

int main(int argc, char *argv[])
{
    int n, indice = 0, count_inversions = 0;

    cin >> n;
    vector<int> v1(n), v2(n), v_aux(n);//crio um vetor do tamanho do meu n

    for(int i = 0; i < n; i++)
    {
        cin >> v1[i];
        v2[i] = v1[i];//Crio uma copia do primeiro vetor
    }
    //Ordeno ele pra comparar
    sort(v2.begin(), v2.end());
    //1 7 3 5 1 -> v1
    //1 1 3 5 7 -> v2
    for(int i = 0; i < n; i++)
    {    
        if(v1[i] != v2[i])//se sao diferentes é aqui que eu inverto
        {
            count_inversions++;//conto +1 no numero de inversoes
            v_aux[indice++] = v2[i];//e recebo esse valor
        }
    }

    cout<< count_inversions <<endl;//mostro quantas inversoes foram feitas
    for(int i = 0; i < count_inversions; i++)
        cout << v_aux[i]<<" ";//e depois mostro os valores
    cout<<endl;
           
    return 0;
}