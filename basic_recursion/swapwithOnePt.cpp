
#include <iostream>
using namespace std;

void reverseWithonePt(int a[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    reverseWithonePt(a, i + 1, n);
}

int main()
{
    int n = 7;
    int arr[n] = {2, 4, 5, 3, 7, 9, 5};

    reverseWithonePt(arr, 0, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
}