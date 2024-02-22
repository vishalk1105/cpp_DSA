#include <iostream>
using namespace std;
int sum = 0;
int summation(int n)
{
    if (n < 1)
        return 0;
    sum = sum + n;
    summation(n - 1);
    return sum;
}

void parameterisedSum(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    parameterisedSum(i - 1, sum + i);
}

int functionalSum(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    sum = n + functionalSum(n - 1);
    return sum;
}

int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;
    // int sum1 = summation(n);
    // cout << sum1 << endl;
    // parameterisedSum(n, 0);

    int sum = functionalSum(n);
    cout << sum << endl;
}