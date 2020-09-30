#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Student 
{
    public:
        string firstName;
        string lastName;
        int ID;
        vector<int> scores;
    
        Student(string firstName, string lastName, int ID, vector<int> scores) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->ID = ID;
            this->scores    = scores;
        }

        char calculate()
        {
            char grade;
            double score = calculateAvarage(scores);

            if (score >= 90 && score <= 100) {
                grade = 'O';
            } else if (score >= 80 && score <= 90) {
                grade = 'E';
            } else if (score >= 70 && score <= 80) {
                grade = 'A';
            } else if (score >= 55 && score <= 70) {
                grade = 'P';
            } else if (score >= 40 && score <= 55) {
                grade = 'D';
            } else if (score < 40) {
                grade = 'T';
            }

            return grade;
        }

        double calculateAvarage(vector<int> numbers)
        {
            double summation = 0;

            vector<int>::iterator p = numbers.begin();

            while (p != numbers.end())
            {
                summation += *p;
                p++;
            }
            
            return summation / numbers.size();
        }
};

int main()
{
    vector<int> scores;
    scores.push_back(89);
    scores.push_back(70);

    Student st("Hasinur", "Rahman", 2283, scores);

    cout << "Name: " << st.firstName << ", " << st.lastName << endl;
    cout << "ID: " << st.ID << endl;
    cout << "Grade: " << st.calculate() << endl;
}