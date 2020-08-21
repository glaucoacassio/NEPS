#include <bitset> // compact STL for Sieve, more efficient than vector<bool>!
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs; 
vi primes;

// Funcao pra precomputar a posicao
// de cada numero primo usando Sieve 
// e dizer se é primo ou nao(Muito rapida por sinal).
void sieve(ll upperbound)
{                                
    _sieve_size = upperbound + 1; 
    bs.set();                     
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++)
        if (bs[i])
        {
            for (ll j = i * i; j <= _sieve_size; j += i)
                bs[j] = 0;
            primes.push_back((int)i);
        }
} 

bool isPrime(ll N)
{ 
    if (N <= _sieve_size)
        return bs[N]; 
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0)
            return false;
    return true; 
} 

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ll n, v;

    sieve(10000000);  
    cin>> n;
    for(int i=0; i<n; i++)
    {
        if(primes[i] <= n) cout << primes[i] << " ";
        else break;
    }
    cout<<endl;

    return 0;
}