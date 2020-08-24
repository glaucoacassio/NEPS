#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int p1, c1, p2, c2, ladoA, ladoB;

    cin>> p1 >> c1 >> p2 >> c2;
    ladoA = p1*c1, ladoB = p2*c2;

    if (ladoA == ladoB) cout<< 0 <<endl;
    else if(ladoA < ladoB) cout<< 1 <<endl;
    else cout<< -1 <<endl;
    
    return 0;
}
