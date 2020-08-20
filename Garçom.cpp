#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n_bandejas, latas, copos, ans = 0;

    scanf("%d", &n_bandejas);
    while(n_bandejas--)
    {
        scanf("%d %d",&latas, &copos);
        if (latas > copos) ans += copos;
    }
    printf("%d\n", ans);

    return 0;
}
