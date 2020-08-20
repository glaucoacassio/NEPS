#include <iostream>

using namespace std;

int soma(int n)
{
    if(n == 1) return 1;
    else return soma(n-1) + n;
}

int main()
{
/*
N = 1+2+3+4+5... (N-1) + N
soma(n) = soma(n-1) + n
*/
    int n;
    cin>>n;
    cout<<soma(n)<<endl;

    return 0;
}