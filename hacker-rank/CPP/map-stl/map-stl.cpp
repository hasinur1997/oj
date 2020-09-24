#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main() {
    map<string, int> person;

    int Q, type, Y;
    string X;

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> type;
        cin >> X;
        switch (type) {
            case 1:
                cin >> Y;
                person[X] += Y;
                break;
            
            case 2:
                person.erase(X);
                break;
            case 3:
                cout << person[X] << endl;
                break;
        }
    }

}