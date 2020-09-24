#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int N, Q, Y;
    vector<int> v;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int item;
        cin >> item;
        v.push_back(item);
    }

    cin >> Q;

    for (int i = 1; i <= Q; i++) {
        cin >> Y;
        
        vector<int>::iterator low;
        low = lower_bound(v.begin(), v.end(), Y);

        if ( v[low - v.begin()] == Y ) {
            cout << "Yes" << " " << (low - v.begin() + 1) << endl;
        } else {
            cout << "No" << " " << (low - v.begin() + 1) << endl;
        }
    }
    
    return 0;
}