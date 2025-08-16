#include <iostream>

using namespace std;

int main()
{
    cout << "this program shows if else--" << endl;

    int age = 18;

    // if block
    if (age > 18)
    {
        cout << "this person can vote" << endl;
    }

    // if else block
    if (age > 18)
    {
        cout << "this person can vote" << endl;
    }
    else
    {
        cout << "this person can not vote" << endl;
    }

    // if else block
    if (age > 18)
    {
        cout << "this person can vote" << endl;
    }
    else if (age == 18)
    {
        cout << "this person is exactly 18" << endl;
    }
    else
    {
        cout << "this person can not vote" << endl;
    }

    return 0;
}
