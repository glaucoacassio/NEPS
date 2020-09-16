/**   
 *   Author:    @glaucoacassioc
 *   Created on 15.09.2020, 23:39:10
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vi v(4);
	for(int i=0; i<4; i++)
		cin>>v[i];
	sort(v.begin(), v.end());
	cout<< abs((v[0]+v[3])-(v[2]+v[1])) <<endl;
	return 0;
}
