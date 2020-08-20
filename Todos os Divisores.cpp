#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 100000

int main(int argc, char const *argv[])
{  
    int X;

    scanf("%d",&X);
    for (int i=1; i<=X; i++)
        if (X % i == 0) cout<< i <<" ";
    cout<<endl;

    return 0;
}