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

int main()
{
    int x0, y0, x1, y1, a0, a1, b0, b1;

    cin >> x0 >> y0 >> x1 >> y1;
    cin >> a0 >> b0 >> a1 >> b1;

    if ( (a0 > x1) || (x0 > a1) || (y0 > b1) || (b0 > y1) )
        cout << 0 << endl;
    else 
        cout << 1 << endl; 

    return 0;
}
