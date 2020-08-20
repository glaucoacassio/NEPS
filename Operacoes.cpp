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
    char c;
    double x, y;

    scanf("%c %lf %lf", &c, &x, &y);
    if(c == 'M') printf("%.2lf\n", x*y);
    else printf("%.2lf\n", x/y);

    return 0;
}