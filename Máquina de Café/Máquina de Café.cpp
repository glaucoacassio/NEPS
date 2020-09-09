/*

Author: glaucoacassioc
Created on 2020-09-09, 10:08:14
*/
#include <bits/stdc++.h> 
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    int A1, A2, A3, cafeteira_andar1, cafeteira_andar2, cafeteira_andar3, menor_tempo;

    cin >> A1 >> A2 >> A3;
    cafeteira_andar1 = (A2*2) + (A3*4);
    cafeteira_andar2 = (A1*2) + (A3*2);
    cafeteira_andar3 = (A1*4) + (A2*2);
    menor_tempo = min(cafeteira_andar1, min(cafeteira_andar2, cafeteira_andar3));
    cout << menor_tempo << endl;

    return 0;
}
