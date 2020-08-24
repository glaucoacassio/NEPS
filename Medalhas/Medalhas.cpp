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
	set<pair<int, int> > sp;
	int a;

	for (int i=1; i<=3; i++)
	{
		cin >> a;
		sp.insert(make_pair(a, i)); 
	}
	for(pair<int, int> p : sp)
		cout << p.second << endl;

	return 0;
}
