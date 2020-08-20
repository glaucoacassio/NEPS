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
using namespace std; 

int main()
{
    int n; 
    double numero;

    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> numero;
        cout << fixed << setprecision(4) << sqrt(numero) <<endl;
    }

    return 0;
}