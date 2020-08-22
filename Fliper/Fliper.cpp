#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int P, R;

    cin >> P >> R;
    if (P == 0) cout<<"C"<<endl;
    else if (P == 1 && R == 1) cout<<"A"<<endl;
    else if (P == 1 && R == 0) cout<<"B"<<endl;

    return 0;
}
