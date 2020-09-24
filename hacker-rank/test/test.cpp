#include <iostream>
using namespace std;

int main()
{
    int a, b, bitAnd, bitOr, rightShift, leftShift, bitNot;

    a = 32;
    b = 12;

    bitAnd = a & b;
    bitOr = a | b;

    rightShift = a >> 2;
    leftShift = a << 2;

    bitNot = ~a;

    cout << bitAnd << endl;
    cout << bitOr << endl;
    cout << rightShift << endl;
    cout << leftShift << endl;
    cout << bitNot << endl;

    return 0;
}