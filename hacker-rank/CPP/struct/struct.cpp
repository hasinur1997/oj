#include <iostream>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main()
{
    Student s;

    s.age = 22;
    s.first_name = "Hasinur";
    s.last_name = "Rahman";
    s.standard = 15;

    cout << s.age << " " << s.first_name << " " << s.last_name << " " << s.standard << endl;

    return 0;
}