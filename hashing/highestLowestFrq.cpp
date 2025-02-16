#include <bits/stdc++.h>

using namespace std;

int main()
{

    int array[] = {10, 5, 10, 15, 10, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int maxFrq;
    int minFrq;
    unordered_map<int, int> mp;

    for (int i = 0; i < size; i++)
    {
        mp[array[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
}