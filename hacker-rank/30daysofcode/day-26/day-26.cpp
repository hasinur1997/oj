#include<iostream>

using namespace std;

int main()
{
    int Da, Ma, Ya, De, Me, Ye, fine = 0;
    cin >> Da >> Ma >> Ya >> De >> Me >> Ye;

    if (Ya == Ye) {
        if (Ma == Me && Da > De) {
            fine = 15 * (Da - De);
        } else if(Ma > Me) {
            fine = 500 * (Ma - Me);
        }
    } else if (Ya > Ye) {
        fine = 10000;
    }


    cout << fine << endl;
}