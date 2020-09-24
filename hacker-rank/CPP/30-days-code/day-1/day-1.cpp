#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int secondInt;
    double secondDouble;
    string secondStr;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    cin >> secondInt;
    cin >> secondDouble;
    cin >> secondStr;
    getline(cin, secondStr);

    // Print the sum of both integer variables on a new line.
    cout << i + secondInt << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + secondDouble);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + secondStr << endl;

    return 0;
}