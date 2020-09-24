#include <vector>
#include <iostream>
using namespace std;

int main() {
    int N, q1, q2, q3;
    vector<int> a;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int item;
        cin >> item;
        a.push_back(item);
    }

   cin >> q1 >> q2 >> q3;
   
   a.erase(a.begin() + (q1 - 1));
   a.erase(a.begin() + (q2 -1), a.begin() + (q3 - 1));

    cout << a.size() << endl;

    for (int &x: a) {
        cout << x << " ";
    }

    cout << endl;

}