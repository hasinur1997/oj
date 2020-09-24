#include<iostream>
#include<sstream>

using namespace std;

class Student {
    public:
        int age;
        int standard;
        string first_name;
        string last_name;

        string get_first_name() {
            return first_name;
        }

        string get_last_name() {
            return last_name;
        }

        int get_age() {
            return age;
        }

        string to_string() {
            stringstream ss;
            char c = ',';

            ss << age << c << first_name << c << last_name << c << standard;
            return ss.str();
        }

        int get_standard() {
            return standard;
        }

        void set_first_name(string f_name) {
            first_name = f_name;
        }

        void set_last_name(string l_name) {
            last_name = l_name;
        }

        void set_age(int ag) {
            age = ag;
        }

        void set_standard(int std) {
            standard = std;
        }



};


int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;

    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_standard(standard);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
}