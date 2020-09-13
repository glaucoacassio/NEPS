/**   
 *   Author:    @glaucoacassioc
 *   Created on 12.09.2020, 23:02:56
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 

ll gcd(ll a, ll b)
{
	if(b == 0) return a;
	else return gcd(b, a % b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, m;

	cin>> n >> m;
	while(gcd(n,m) != 1)
	{
		m--;
	}
	cout << m << endl;
	return 0;
}
