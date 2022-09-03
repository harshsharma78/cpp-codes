#include <iostream>
using namespace std;

int main()
{
    char a, d, m, s, ch, h;
    int i, j;
label:
    cout << "Enter a char" << endl;
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cin >> i >> j;
        cout << "Addition is " << i + j;
        /* code */
        break;
    case 'm':
        cin >> i >> j;
        cout << "Multi is " << i * j;
        /* code */
        break;
    case 'd':
        cin >> i >> j;
        cout << "Div is " << i / j;
        /* code */
        break;
    case 's':
        cin >> i >> j;
        cout << "Sub is " << i - j;

        break;
    case 'h':
        float nu, den;
        cin >> nu >> den;
        if (den == 0)
        {
            cout << "cannot divide by zero " << endl;
        }
        else
        {
            goto label;
        }

        break;
    default:
        cout << "No operation";
        break;
    }
}
