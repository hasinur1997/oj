#include<iostream>
#include<cmath>
#include<exception>

using namespace std;

class MyException : public exception
{
  const char * what () const throw ()
  {
    return "n and p should be non-negative";
  }
};


class Calculator {
    public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0) {
           throw MyException();
        }

        return pow(n, p);
    }
};

int main()
{
    Calculator ct;

    int n, p;

    cin >> n >> p;

    try
    {
        cout << ct.power(n, p) << endl;
    }
    catch(exception& e)
    {
        cout << e.what() << '\n';
    }
    
}