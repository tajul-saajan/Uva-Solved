/*

 Problem: UVa 10212 - The Last Non-zero Digit.
   Programmer: Tajul Isalm Saajan
   Description:  Binary to decimal, Module
   Compiled: Codeblocks 13.12
   Date: 29-12-14

*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int i, j, k, l, t, f;
    int res;
    while (scanf("%d %d", &i, &j) == 2)
    {
        res = 1, t = 0, f = 0;
        for (k = i; k > i - j; k--)
        {
            l = k;
            while (!(l & 1))
            {
                l >>= 1;
                t++;
            }
            while (l % 5 == 0)
            {
                l /= 5;
                f++;
            }
            res = (res * l) % 10;
        }
        for (i = t; i < f; i++)
            res = (res * 5) % 10;
        for (i = f; i < t; i++)
            res = (res * 2) % 10;
        printf("%d\n", res % 10);
    }
    return 0;
}
