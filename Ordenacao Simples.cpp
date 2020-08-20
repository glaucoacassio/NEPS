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

typedef long long int ll;

int main(int argc, char **argv)
{
    int n;
    
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
        scanf("%lld", &v[i]);

    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
        printf("%lld ", v[i]);
    printf("\n");

    return 0;
}
