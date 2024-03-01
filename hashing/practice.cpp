#include <bits/stdc++.h>

using namespace std;

int main()
{

    array<int, 6> arr{10, 5, 10, 15, 10, 5};

    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << "-->" << it.second << endl;
    }

    int number;
    cout << "Enter number ";
    cin >> number;
    cout << mp[number] << endl;
}