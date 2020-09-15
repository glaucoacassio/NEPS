/**   
 *   Author:    @glaucoacassioc
 *   Created on 15.09.2020, 18:10:38
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
	int n;
	cin>>n;
	vi v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];

	bool perfil_escher = false;
	for(int j=0; j<(n+1)/2; j++)
	{
		if((v[j] + v[j-n-1]) == (v[j+1] + v[j-n-2])) 
		{
			perfil_escher = true;
			break;
		}
	}
	if(!perfil_escher) cout<<"N"<<endl;
	else cout<<"S"<<endl;
	return 0;
}
