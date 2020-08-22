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
using namespace std;
const int MAX = 110;

int n, A[MAX][MAX], B[MAX][MAX], S[MAX][MAX];

int main() {
    //leio a primeira matriz
    cin >> n;
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)    
        cin >> A[i][j];
	//leio a segunda matriz
    for (int i=0; i<n; i++)
    for (int j=0; j<n; j++)    
        cin >> B[i][j];
    
    //somo as matrizes e mostro
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)    
        {
            S[i][j]=A[i][j]+B[i][j]; 
            cout<< S[i][j]<<" ";   
        }
        cout<<endl;
    }
	return 0;
}
