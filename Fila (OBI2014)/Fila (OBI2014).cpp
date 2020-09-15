/**   
 *   Author:    @glaucoacassioc
 *   Created on 15.09.2020, 19:07:02
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
	int n, t, value;
	cin>>n;
	vi v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];

	cin>>t;
	while(t--)
	{
		cin>>value;
      		auto itr = find(v.begin(), v.end(), value);
		if(itr != v.end()) v.erase(itr);
	}
	for(auto it=v.begin(); it!=v.end(); it++)
		cout<<*it<<" ";	
	cout<<endl;
	return 0;
}
