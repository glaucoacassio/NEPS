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

    cin>>N;
    vector<int> fita(10000);
    for (int i = 0; i < N; i++)
    {
        cin>>fita[i];
        if (fita[i] == -1) fita[i] = 10;
    }
    for (int i = 1; i < N; i++)
        //vou da esquerda pra direita calculando o zero mais a esquerda
        fita[i] = min(9, min(fita[i], fita[i-1]+1));
    
    for (int j = N-2; j > -1; j--)
         //vou da direita pra esquerda calculando o zero mais a direita
        fita[j] = min(9, min(fita[j], fita[j+1]+1));
    
    for (int k = 0; k < N; k++)
        cout<< fita[k] <<" ";
    cout<<endl;

    return 0;
}