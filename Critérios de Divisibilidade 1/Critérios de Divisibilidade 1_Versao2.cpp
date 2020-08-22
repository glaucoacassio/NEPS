/*
Metodo usando propriedades de divisibilidade e forca bruta(meio feia mas faz o servico).
As propriedades de divisibilidade dizem que:
- Todo numero divisivel por 2 tem o ultimo digito divisivel por 2
- Todo numero divisivel por 5 termina em 5 ou 0
- Todo numero divisivel por 3 tem a soma dos digitos divisivel por 3
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string G;
    long long i, soma = 0;

    cin>>G;

    if(G[G.size()-1] == '0' || G[G.size()-1] == '2' || G[G.size()-1 ]== '4' || G[G.size()-1] == '6' || G[G.size()-1] == '8') cout<<"S"<<endl;
    else cout<<"N"<<endl;
    
    for(i=0;i<G.size();i++){
            if(G[i]=='1') soma+= 1;
            else if(G[i]=='2') soma+= 2;
            else if(G[i]=='3') soma+= 3;
            else if(G[i]=='4') soma+= 4;
            else if(G[i]=='5') soma+= 5;
            else if(G[i]=='6') soma+= 6;
            else if(G[i]=='7') soma+= 7;
            else if(G[i]=='8') soma+= 8;
            else if(G[i]=='9') soma+= 9;
    }

    if(soma % 3 == 0) cout<<"S"<<endl;
    else cout<<"N"<<endl;

    if(G[G.size()-1] == '0' || G[G.size()-1] == '5') cout<<"S"<<endl;
    else cout<<"N"<<endl;

   return 0;
}
