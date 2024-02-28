#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {1, 5, 4, 1, 3, 4};

    int hash[100] = {0}; //{0, 1,  2, 3, 4, 5, 6, 7, 8,  9, 10 ,11 ,12}
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int number;
    cin >> number;
    cout << hash[number] << endl;
}
