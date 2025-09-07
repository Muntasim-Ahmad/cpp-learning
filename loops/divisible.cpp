#include <iostream>
using namespace std;
int main()
{

    int n = 554;
    int e = 22;
    int r = n % e;
    if (r == 0)
    {
        cout << "divisible";
    }
    else
    {
        cout << " not divisible";
    }
}