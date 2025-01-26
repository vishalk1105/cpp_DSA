#include <iostream>
using namespace std;

int main()
{
    int n = 19;

    int count = 0;

    /* while (n > 1)
      {
          if (n % 2 == 1)
          {
              count++;
          }
          n = n / 2;
      }
      if (n == 1)
          count++;
  */
    /*  while (n > 1)
      {
          count += n & 1;
          n = n >> 1;
      }
      if (n == 1)
          count++;
    */

    while (n != 0)
    {
        n = (n & (n - 1));
        count++;
    }
    cout << count;
}