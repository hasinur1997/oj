#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    string c[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;

    for (i = a; i <= b; i++)
    {
        cout << ((i <= 9) ? c[i] : (i % 2 == 0) ? "even" : "odd") << endl;
    }
}