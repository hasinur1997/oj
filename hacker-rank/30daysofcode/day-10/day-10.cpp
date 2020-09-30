// #include<iostream>
// #include<vector>

// using namespace std;

// vector<int> binary(int n)
// {
//     int remainder;
//     vector<int> numbers;

//     while (n > 0)
//     {
//         numbers.push_back(n%2);
//         n = n / 2;
//     }
    
//     return numbers;
// }

// int main()
// {
//     vector<int> numbers = binary(13);

//     numbers = reverse(numbers.begin(), numbers.end());

//     for (int i = 0; i < numbers.size(); i++) {
//         cout << numbers[i];
//     }

//     cout << endl;
// }

#include <iostream>
#include <list>
using namespace std;

list<int> binary(int n)
{
    list<int> numbers;

    if (n > 0) {
        numbers.push_front(n % 2);
        return binary(n / 2);
    }

    return numbers;
    
}


int main()
{
    list<int> lst = binary(13);

    list<int>::iterator p = lst.begin();

    while (p != lst.end())
    {
        cout << *p ;
        *p++;
    }
    
    cout << endl;
    return 0;
}