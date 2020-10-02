#include<iostream>

using namespace std;

class AdvancedArithmetic {

    public:
        virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
    public:
        int divisorSum(int n)
        {
            int sum = n;
            int half = n / 2;

            for (int i = 1; i <= half; i++) {
                if (n % i == 0) {
                    sum = sum + i;
                }
            }

            return sum;
        }
};


int main()
{
    int n;

    cin >> n;
    Calculator cal;

    int sum = cal.divisorSum(n);

    cout << "I implemented: AdvancedArithmetic" << endl << sum << endl;
}