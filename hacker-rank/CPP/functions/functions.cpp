#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int gratest;

    if (a > b && a > c && a > d)
    {
        gratest = a;
    }
    else if (b > a && b > c && b > d)
    {
        gratest = b;
    }
    else if (c > a && c > b && c > d)
    {
        gratest = c;
    }
    else
    {
        gratest = d;
    }

    return gratest;
}

int main()
{
    int a, b, c, d;

    cout << max_of_four(30, 2, 10, 1) << "\n";
}