#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {50, 32, 56, 23, 665};
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "largest element=" << max << endl;
}