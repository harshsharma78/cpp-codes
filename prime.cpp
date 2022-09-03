#include <iostream>
using namespace std;
int main()
{
    int i, s, prime = 1;
    cout << "Enter any number" << endl;
    cin >> s;
    if (s == 0 || s == 1)
    {
        cout << "Neither Prime nor Composite" << endl;
       prime=false;
    }
    else
    {
        for (i = 2; i <= s / 2; i++)
        {
            if (s % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
    {
        cout << s << " is prime" << endl;
    }
    else
    {
        cout << s << " is not prime";
    }
}