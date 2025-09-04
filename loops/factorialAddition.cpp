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
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + getFactorial(i);
    }

    cout << "sum " << sum << endl;
}