#include <iostream>
using namespace std;
// TC --> o(n)
// Sc --> o(n)
void printNumber(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    i++;
    printNumber(i, n);
}

void printNum1(int i, int n)
{
    if (n < i)
        return;
    cout << n << " ";
    n--;
    printNum1(i, n);
}

// Backtracing
// 1 2 3 4 n=4
void printNum2(int i, int n)
{
    if (i < 1)
        return;
    printNum2(i - 1, n);
    cout << i << " ";
}

// 3 2 1 n=3
void printNum4(int i, int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    printNum4(i, n - 1);
}

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    // printNumber(1, n);
    printNum4(n, n);
}