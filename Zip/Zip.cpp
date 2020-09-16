/**   
 *   Author:    @glaucoacassioc
 *   Created on 16.09.2020, 20:26:00
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
 
int pontos(int x, int y)
{
	if(x == y) return 2*(x+y);
	else if(x+1 == y || x == y+1) return 3*(x+y);
	return x+y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(pontos(a,b) == pontos(c,d)) cout<<"empate"<<endl;
	else if(pontos(a,b) > pontos(c,d)) cout<<"Lia"<<endl;
	else cout<<"Carolina"<<endl;
	return 0;
}
