/**   
 *   Author:    @glaucoacassioc
 *   Created on 13.09.2020, 21:23:25
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
	vi v(3);

	cin>>n;
	for(int i=0; i<3; i++)
		cin>>v[i];
	
	sort(v.begin(), v.end());
	int i = 0;
	while(i < 3 && n >= v[i])
	{
		n -= v[i];
		i++;
	}
	cout << i << endl;
	return 0;
}
