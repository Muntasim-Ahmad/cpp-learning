#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << "sum:" << add(55, 45) << endl;
    return 0;
}

#include <iostream>

using namespace std;

bool iseven(int n)
{
    return (n % 2 == 0);
}

int main()
{
    int n = 55;
    cout << n << "is" << (iseven(n) ? "even" : "odd") << endl;
}