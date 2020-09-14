/**   
 *   Author:    @glaucoacassioc
 *   Created on 13.09.2020, 15:16:27
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
	int k, x, y;

	cin >> k >> x >> y;
	if(abs(x-y) >= k) cout<<"EH SUFICIENTE"<<endl;
	else cout<<"NAO EH SUFICIENTE"<<endl; 

	return 0;
}
