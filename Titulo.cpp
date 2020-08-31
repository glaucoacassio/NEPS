#include <iostream>
using namespace std;

string title(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        if (isupper(s[i])) s[i] = tolower(s[i]);
        if(i == 0 || s[i-1] == ' ') s[i] = toupper(s[i]); 
    }
    return s;
}

int main()
{
    string str;

    getline(cin, str);
    cout << title(str) << "\n";
}
