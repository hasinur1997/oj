#include<iostream>

using namespace std;

template <class T>

class AddElements {

    public:
        T sum;
        AddElements(T data) 
        {
            sum = data;
        }

        T add(T number)
        {
            sum += number;

            return sum;
        }

        T concatenate(T s)
        {
            sum += s;

            return sum;
        }
};


int main()
{
    AddElements<int> myint(1);
    AddElements<double> myfloat(4.0);
    AddElements<string> mystring("Hasinur");

    cout << myint.add(2) << endl;
    cout << myfloat.add(1.5) << endl;
    cout << mystring.concatenate("Rahman") << endl;
}

