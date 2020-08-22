#include <cstdio>    
#include <algorithm> 
#include <vector>   
using namespace std; 

#define MAXN 100100  

int main()
{
    int n, v[MAXN], max_sub_c, sub_c = 1;

    scanf("%d", &n);
    max_sub_c = -1000000000;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v[i]);
        if (v[i-1] == v[i]) 
        {
            sub_c++;
            if (sub_c > max_sub_c) max_sub_c = sub_c;
        }
        else sub_c = 1;
    }
    printf("%d\n", max_sub_c);

    return 0;
}
