#include <algorithm>
#include <cstdio>

#define INF 1000000000
#define MAXN 1000

using namespace std;

int matrix[MAXN][MAXN];
int sumr[MAXN], sumc[MAXN];

int main() 
{ 
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) 
    for (int j = 0; j < n; ++j) 
    {
        scanf("%d", &matrix[i][j]);
        sumr[i] += matrix[i][j];
        sumc[j] += matrix[i][j];
    }
  
    int ret = -INF;
    for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
        ret = max(ret, sumr[i] + sumc[j] - 2*matrix[i][j]);

    printf("%d\n", ret);

    return 0;
}