#include <iostream>
using namespace std;

// function without arguments
int printName()
{
    cout << "muntasim" << endl;
    return 0;
}

// function with arguments
int printAnyNAme(string name)
{
    cout << name << endl;
    return 0;
}

int addTwoNumbers(int a, int b)
{
    return a + b;
}

int doubleAndAddNumbers(int a, int b)
{
    int result = a * 2 + b * 2;
    return result;
}

int main()
{
    cout << "hello world" << endl;
    // printName();

    // printAnyNAme("Imtiyaz");
    // printAnyNAme("John");

    // printAnyNAme("Abc");
    // int result = addTwoNumbers(5, 6);
    // int result2 = addTwoNumbers(19, 55);
    // cout << result2 << endl;

    // cout << result;
    int result = doubleAndAddNumbers(2, 4);

    cout << result;

    return 0;
}