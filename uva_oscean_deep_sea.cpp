/* Problem: Ocean Deep! Make it shallow!! UVa 10176
   Programmer: Tajul Isalm Saajan
   Description:  Binary to decimal, Module
   Compiled: Codeblocks 13.12
   Date: 29-12-14
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[20000];
    int i, len, number;
    char ch;

    while (cin >> ch)
    {
        number = 0;
        number += ch - '0';
        while (cin >> ch)
        {
            if (ch == '#') break;
            number = number << 1;//left shift multiplying by 2 each time
            number += ch - '0';
            number = number % 131071;
        }

        if (number == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
