#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a, b, media;

    cin>> a >> b;
    media = (a+b)/2;
    if (media >= 7.0) cout<<"Aprovado"<<endl;
    else if (media < 7.0 && media >= 4.0) cout<<"Recuperacao"<<endl;
    else cout<<"Reprovado"<<endl;
    
    return 0;
}
