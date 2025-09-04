#include <iostream>
using namespace std;

int main()
{
    double pricePerCup = 10;
    int cupsCount;
    double discount;

    cout << "Enter the number of cups then press enter " << endl;
    cin >> cupsCount;

    if (cupsCount > 20)
    {
        discount = 0.2;
    }
    else if (cupsCount > 10 && cupsCount < 20)
    {
        discount = 0.1;

        if (cupsCount == 14)
        {
            discount = discount + 0.1;
        }
        else if (cupsCount == 15)
        {
            discount = discount + 0.3;
        }
        else
        {
            discount = 0.2;
        }
    }
    else
    {
        discount = 0;
    }

    cout << "Total price after discount = "
         << pricePerCup * cupsCount * (1 - discount);

    return 0;
}
