// #include <iostream>
// using namespace std;

// bool iseven(int num)
// {
//     return (num % 2 == 0);
// }
// int main()
// {
//     int n;
//     cout << "enter a number:";
//     cin >> n;

//     if (iseven(n))
//     {
//         cout << n << "is even" << endl;
//     }
//     else
//     {
//         cout << n << "is odd" << endl;
//     }
// }

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int num;
    cout << "enter a number:";
    cin >> num;
    if (isPrime(num))
    {
        cout << num << "isPrime";
    }
    else
    {
        cout << num << "is Not Prime";
    }
    return 0;
}
