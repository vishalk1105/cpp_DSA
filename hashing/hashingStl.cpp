// hashing big arrays 10^9,10,12 it is not possible using array
// fot solving this issue we need stl

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {1, 5, 4, 1, 3, 4};

    map<int, int> mpp;
    for (int i = 0; i < 6; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate mapp
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }

    int number;
    cin >> number;
    cout << mpp[number] << endl;
}