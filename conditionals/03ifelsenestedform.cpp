#include <iostream>

using namespace std;
int main()
{

    int cups;

    double pricepercup = 2.5, totalPrice, discount;
    cout << "enter the number tea cups";
    cin >> cups;

    if (cups > 20)
    {
        discount = 0.20;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    cout << "totalprice after discount is:" << totalPrice * discount << endl;
    return 0;
}