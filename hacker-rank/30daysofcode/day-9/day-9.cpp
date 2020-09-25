#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    cout << factorial(3) << endl;

}

int factorial(int n)
{
    if (n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}