#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string ch = "abcefdcba";

    char c;
    cout << "Enter a character ";
    cin >> c;
    int hash[26] = {0};

    for (int i = 0; i < ch.size(); i++)
    {
        hash[ch[i] - 'a']++;
    }

    cout << hash[c - 'a'] << endl;
}