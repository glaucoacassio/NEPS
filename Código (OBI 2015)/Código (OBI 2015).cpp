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
    int N, ans = 0;

    scanf("%d",&N);
    vector<int> v(N+1, -1);
    for (int i =0; i<N; i++)
        scanf("%d",&v[i]);

    for (int i = 0; i < N; i++)
        if (v[i] == 1 && v[i+1] == 0 && v[i+2] == 0) ++ans;
    printf("%d\n", ans);

    return 0;
}
