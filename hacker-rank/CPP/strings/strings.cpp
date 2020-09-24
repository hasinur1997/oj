#include<iostream>
#include<string>

using namespace std;

int main() {
    string a, b;
    char firsta, firstb;
    cin >> a >> b;

    firsta = a[0];
    firstb = b[0];

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;

    a[0] = firstb;
    b[0] = firsta;

    cout << a << " " << b << endl;


}
