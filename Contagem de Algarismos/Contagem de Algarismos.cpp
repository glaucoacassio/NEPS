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
    int n, arr[10] = { 0 };
    char num[200];

    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> num;
        for (int i = 0; i < strlen(num); i++ )
            arr[ num[i] - '0' ]++;
    }

    for (int j = 0; j < 10; j++ )
        printf("%d - %d\n", j, arr[j]);

    return 0;
}
