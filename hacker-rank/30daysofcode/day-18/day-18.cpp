#include<iostream>
#include<stack>
#include<queue>

using namespace std;

class Solution {

    public:
        stack<char> s;
        queue<char> q;

        void pushCharacter(char i)
        {
            s.push(i);
        }

        void enqueueCharacter(char i)
        {
            q.push(i);
        }

        char popCharacter(char i)
        {
            char temp = s.top();
            s.pop();

            return temp;
        }

        char dequeueCharacter(char i)
        {
            char temp = q.front();
            q.pop();
            
            return temp;
        }


};

int main()
{
    Solution obj;

    obj.pushCharacter('A');
}