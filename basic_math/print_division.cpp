#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    std::vector<int> ls;
    for (int i = 1; i <= std::sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (n / i != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    std::sort(ls.begin(), ls.end());
    for (size_t i = 0; i < ls.size(); ++i)
    {
        std::cout << ls[i] << " ";
    }
    return 0;
}
