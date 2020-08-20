#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
using namespace std; 

int main()
{
    char tmp;

    while((tmp = getchar()) != EOF)
    {
        switch(tmp)
        {
            case 'A': cout<<2;
                break;
            case 'B': cout<<2;
                break;
            case 'C': cout<<2;
                break;
            case 'D': cout<<3;
                break;
            case 'E': cout<<3;
                break;
            case 'F': cout<<3;
                break;
             case 'G': cout<<4;
                break;
            case 'H': cout<<4;
                break;
            case 'I': cout<<4;
                break;
            case 'J': cout<<5;
                break;
            case 'K': cout<<5;
                break;
            case 'L': cout<<5;
                break;
             case 'M': cout<<6;
                break;
            case 'N': cout<<6;
                break;
            case 'O': cout<<6;
                break;
            case 'P': cout<<7;
                break;
            case 'Q': cout<<7;
                break;
            case 'R': cout<<7;
                break;
             case 'S': cout<<7;
                break;
            case 'T': cout<<8;
                break;
            case 'U': cout<<8;
                break;
            case 'V': cout<<8;
                break;
            case 'W': cout<<9;
                break;
            case 'X': cout<<9;
                break;
            case 'Y': cout<<9;
                break;
            case 'Z': cout<<9;
                break;
            default: cout<< tmp;
        }   
    }
    return 0;
}