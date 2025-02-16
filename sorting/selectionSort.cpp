#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int arr[n] = {13, 45, 14, 52, 9};
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (auto it : arr)
    {
        cout << it << endl;
    }
}