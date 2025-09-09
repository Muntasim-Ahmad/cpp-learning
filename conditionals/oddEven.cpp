#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "enter a number to check ";
    cin >> n;

    int r = n % 2;
    if (r == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}