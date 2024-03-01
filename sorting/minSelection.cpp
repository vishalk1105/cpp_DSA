#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= size - 2; i++)
    {
        int min = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}