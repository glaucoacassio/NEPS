#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int bino, cino;

    cin>> bino >> cino;
    if((bino + cino) % 2 == 0) cout<<"Bino"<<endl;
    else cout<<"Cino"<<endl;
    
    return 0;
}
