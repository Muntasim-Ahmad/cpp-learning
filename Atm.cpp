#include <iostream>

using namespace std;

int main()
{

    int currentBalence = 1000;
    int withdrawAmount;

    cout << "enter amount to withdraw then press enter" << endl;
    cin >> withdrawAmount;

    if (withdrawAmount > currentBalence)
    {
        cout << "insufficient balence" << endl;
        if (withdrawAmount - currentBalence > 300)
        {
            cout << "you are asking too much";
        }
        else if (withdrawAmount - currentBalence < 200)
        {
            cout << "you are asking a bit more than yor balence";
        }
    }
    else if (currentBalence == withdrawAmount)
    {
        cout << "you are emptying your account" << endl;
        cout << "available balence is :";

        cout << currentBalence - withdrawAmount << endl;
    }

    else
    {
        cout << "amount can be withdrawn" << endl;
        cout << "available balence is :";

        cout << currentBalence - withdrawAmount << endl;
    }
}
