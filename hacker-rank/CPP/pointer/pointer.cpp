#include <stdio.h>
#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    int sum, substraction;
    sum = *a + *b;
    substraction = abs(*a - *b);

    *a = sum;
    *b = substraction;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin >> a >> b;
    update(pa, pb);

    cout << a << "\n"
         << b << endl;
}