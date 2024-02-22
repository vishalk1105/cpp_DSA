#include <iostream>
using namespace std;

void revrseArr(int a[], int l, int r)
{
    if (l >= r)
        return;

    swap(a[l], a[r]);
    revrseArr(a, l + 1, r - 1);
}

int main()
{
    int n = 5;
    int arr[n] = {2, 4, 5, 3, 7};

    revrseArr(arr, 0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}