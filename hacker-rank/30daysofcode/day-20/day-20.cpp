#include<iostream>
#include<vector>
using namespace std;

class Sort {
    public:
        // Store number of swaps when sorting
        int numberOfSwaps;

        // Store numbers
        vector<int> numbers;

        // Constructor for the Sort class
        Sort(vector<int> numbers)
        {
            numberOfSwaps = 0;
            this->numbers = numbers;
            sorted();
        }

        // Sort the array
        void sorted()
        {
            for(int i = 0; i < numbers.size(); i++) {

                for(int j = 0; j < numbers.size() - 1; j++) {
                    if (numbers[j] > numbers[j+1]) {
                        swap(numbers[j], numbers[j+1]);
                        numberOfSwaps++;
                    }
                }
            }
        }

        // Get the first number of the array
        int first()
        {
            return numbers[0];
        }

        // Get the laste number of the array
        int last()
        {
            int size = numbers.size() - 1;
            return numbers[size];
        }
};

int main()
{
    vector<int> numbers;

    numbers.push_back(100);
    numbers.push_back(10);
    numbers.push_back(102);
    numbers.push_back(2);

    Sort sn(numbers);

    cout << "Array is sorted in " << sn.numberOfSwaps << endl;
    cout << "First Element: " << sn.first() << endl;
    cout << "Last Element: " << sn.last() << endl;
}