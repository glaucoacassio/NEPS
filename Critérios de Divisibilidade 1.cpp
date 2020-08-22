/* 
 * File:   teste1.cpp
 * Author: glaucoacassioc
 * Resolvi usando string...
 * Created on 21 de Agosto de 2020, 21:19
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

#define _ ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);

using namespace std;

string n;
int at, r[3];

int main()
{
    cin >> n;

    for (char i : n)
    {
        at = i - '0';
        r[0] = (10 * r[0] + at) % 2;
        r[1] = (10 * r[1] + at) % 3;
        r[2] = (10 * r[2] + at) % 5;
        
    }
    for (int i = 0; i < 3; i++)
        cout << (r[i] ? 'N' : 'S') << endl;

    return 0;
}
