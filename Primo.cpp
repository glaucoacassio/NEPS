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
using namespace std;

bool eh_primo(int x)
{
    if (x == 2) return true;
    if (x < 2) return false;

    if (x % 2 != 0) 
    {
        for (int i = 3; i <= (x / 3); i += 2)
        {
            if (x % i == 0) return false;
        }
        return true;
    }
    else return false;
}

int main()
{
    int x;

    cin >> x;

    if (eh_primo(x))
    {
            cout << "S" << "\n";
    }
    else
    {
            cout << "N" << "\n";
    }

    return 0;
}