#include<iostream>
#include<set>

using namespace std;

int main() {
    int Q, x, y;
    set<int> s;

    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> y;
        cin >> x;

        switch (y) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if (s.find(x) != s.end()) {
                    cout << "Yes" << "\n";
                } else {
                    cout << "No" << "\n";
                }
            break;
        }
    }

    cout << endl;
}