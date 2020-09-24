#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string store_stream;
    int a, b, c;
    char ch;

    cin >> store_stream;

    stringstream ss(store_stream);

    ss >> a >> ch >> b >> ch >> c;

    cout << a << endl << b  << endl << c << endl;
}

