#include<iostream>
#include<vector>
#include<iterator>
using namespace std;


int main() {
    int N;
    vector<int> v;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    for (int x = 0; x < v.size(); x++) {
        cout << v[x] << " ";
    }

    cout << endl;
}