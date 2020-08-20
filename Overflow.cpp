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
    int a, b, N;
    char op;

    scanf("%d %d %c %d",&N, &a, &op, &b);
    if (op == '+' && (a+b <= N)) printf("OK\n");
    else if (op == '*' && (a*b <= N)) printf("OK\n");
    else printf("OVERFLOW\n");
    
    return 0;
}