#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20], value;
    int strlength;
    cout << "Enter any String" << endl;
    cin >> str;
    strlength = strlen(str);
    for (int i = 1; i <= strlength; i++)
    {
        if (str[i] != str[strlength - i - 1])
        {
            value = 1;
            break;
        }
    }
    if (value)
    {
        cout << "String is not a Palindrome" << endl;
    }
    else
    {
        cout << "String is a Palindrome" << endl;
    }
}