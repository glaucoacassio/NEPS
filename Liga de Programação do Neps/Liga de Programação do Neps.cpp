/**   
 *   Author:    @glaucoacassioc
 *   Created on 13.09.2020, 21:10:25
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	if((n-9) < 0) cout << 24 - abs(n-9) << endl;
	else cout << n-9 << endl;
	return 0;
}
