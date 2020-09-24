#include<iostream>

using namespace std;

void printStair(int n) {
    
    int maxSpace;

    for (int i = 0; i < n; i++) {
        maxSpace = (n - i) - 1;

        for (int j = maxSpace; j >= 0; j--) {
            cout << ' ';
        }

        for (int k = 0; k < (i + 1); k++) {
            cout << "#";
        }

        cout << endl;
    }
}

int main() {
    printStair(4);
}