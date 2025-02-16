#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = std::size(arr);

    int i = 0;
    int j = 1;
    int count = 0;
    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            cout << arr[i] << " " << arr[j] << endl;
            i++;
            count++;
        }
        else
        {
            arr[j] = 0;
        }
        j++;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "Size of an array" << (count + 1) << endl;
}