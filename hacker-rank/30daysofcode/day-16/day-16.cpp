#include<iostream>

using namespace std;

int main()
{
    string S;
    cin >> S;

    try
    {
        cout << stoi(S) << endl;

    }
    catch(...)
    {
        cout << "Bad string" << endl;
    }
    
}