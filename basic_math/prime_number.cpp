#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    int n;
    cout << "Enter a number ";
    cin >> n;

    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }

    if (count == 2)
    {
        cout << "Number is prime number" << endl;
    }
    else
        cout << "Number is not a prime number" << endl;
}