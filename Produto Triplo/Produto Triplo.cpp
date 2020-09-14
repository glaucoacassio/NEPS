/**   
 *   Author:    @glaucoacassioc
 *   Created on 13.09.2020, 17:27:36
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 

ll maximumProduct(vector<ll>& nums) 
{
	sort(nums.begin(), nums.end());	
     	return max(nums[0]*nums[1]*nums[nums.size()-1], 
		   nums[nums.size()-1] * nums[nums.size()-2] * nums[nums.size()-3]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
	#endif
	ll n;
	cin >> n;
	vector<ll> nums(n);
	for(int i=0; i<n; i++)
		cin >> nums[i];

	cout << maximumProduct(nums) << endl;
	return 0;
}
