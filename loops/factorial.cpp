#include <iostream>
using namespace std;

int getFactorial(int input)
{
    int sum = 1;
    for (int i = input; i >= 1; i--)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int sum = 1;
    for (int i = 5; i >= 1; i--)
    {
        sum = sum * i;
    }

    int sum2 = 1;
    for (int i = 4; i >= 1; i--)
    {
        sum2 = sum2 * i;
    }

    int sum3 = 1;
    for (int i = 3; i >= 1; i--)
    {
        sum3 = sum3 * i;
    }

    int total = sum + sum2 + sum3;

    cout << "the total value is " << total << endl;

    // cout << "the value of 5! is " << sum << endl;
}