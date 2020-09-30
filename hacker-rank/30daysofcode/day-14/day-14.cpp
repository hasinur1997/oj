#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

class Difference 
{
    private:
        vector<int> elements;

    public:
        int maximumDifference;
        Difference(vector<int> elements)
        {
            this->elements = elements;
        }

        void computeDifference()
        {
            int mn = *min_element(elements.begin(), elements.end());
            int mx = *max_element(elements.begin(), elements.end());

            maximumDifference = mx - mn;
        }

};

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(5);

    // Difference d(a);
    // d.computeDifference();

    // cout << d.maximumDifference << endl;

    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());

    cout << mx << endl;
}
