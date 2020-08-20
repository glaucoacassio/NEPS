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

int main () 
{
    int x, y;
    cin>> x >> y;
    
    if (x == 0 || y == 0) cout<<"eixos"<<endl;
    else if (x > 0 && y > 0) cout<<"Q1"<<endl;
    else if (x < 0 && y > 0) cout<<"Q2"<<endl;
    else if (x < 0 && y < 0) cout<<"Q3"<<endl;
    else if (x > 0 && y < 0) cout<<"Q4"<<endl;
    
    return 0;
}