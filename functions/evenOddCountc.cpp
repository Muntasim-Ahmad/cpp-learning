#include <iostream>
using namespace std;

bool iseven(int val)
{
    if (val % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[10] = {14, 15, 457, 22, 12, 54, 660, 87, 3, 612};
    int evencount = 0;
    int oddcount = 0;

    for (int i = 0; i < 10; i++)
    {
        if (iseven(arr[i]))
        {
            evencount = evencount + 1;
        }
        else
        {
            oddcount = oddcount + 1;
        }
    }

    cout << "even count is " << evencount << endl;
    cout << " odd count is " << oddcount << endl;
}
