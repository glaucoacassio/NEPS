#include <iostream>
#define MAX 12000002
using namespace std;

void sieve(int n)
{
    int i = 2, counter = 0;
    bool is_prime[MAX];

    is_prime[1] = 1;
    while (counter < n)
    {
        if (!is_prime[i])
        {
            counter+= 1;
            for (int j = 2; j * i <= 12000000; j++) is_prime[j * i] = 1;
        }
        i++;
    }
    cout << i - 1 <<endl;
}

int main(int argc, char *argvs[])
{
    int n;

    cin >> n;
    sieve(n);
    
    return 0;
}
