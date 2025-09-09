#include <iostream>
using namespace std;
int main()
{
    int n = 56;
    for (int i = 1; i * i < n; i++)
    {
        int r = n % i;
        if (r == 0)
        {
            cout << "divisible And Not Prome";
        }
        else
        {
            cout << "not divisible";
        }
    }
}