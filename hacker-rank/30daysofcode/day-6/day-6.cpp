#include<iostream>
#include<vector>

using namespace std;

int main()
{
    string test_string;
    int T;

    cin >> T;
    while (T > 0)
    {
        getline(cin >> ws, test_string);

        string odd_strin;
        string even_string;

        for (int i = 0; i < test_string.size(); i++) {
            if (i == 0 || i % 2 == 0) {
                even_string += test_string[i];
            } else {
                odd_strin += test_string[i];
            }
        }

        cout << even_string << " " << odd_strin << endl;
        T--;
    }
    
    
}