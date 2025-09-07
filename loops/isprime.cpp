#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter a number " << endl;
    cin >> n;
    bool isprime;

    for (int i = 2; i * i <= n; i++)
    {
        int r = n % i;
        if (r == 0)
        {
            isprime = false;
            break;
        }
        else
        {
            isprime = true;
        }
    }

    if (isprime)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "notprime";
    }
}