#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[20];
    int vowels = 0, consonants = 0, spaces = 0, digits = 0;
    cout << "Enter any string" << endl;
    cin.getline(str, 20);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') && (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
        {
            vowels++;
        }
        else if ((str[i] >= 'a') || (str[i] <= 'z') && (str[i] >= 'A') || (str[i] <= 'Z') && (str[i] == 'a') || (str[i] != 'e') || (str[i] != 'i') || (str[i] != 'o') || (str[i] != 'u'))
        {
            consonants++;
        }
        else if (spaces == ' ')
        {
            spaces++;
        }
        else if ((str[i] >= '0') || (str[i] <= '9'))
        {
            digits++;
        }
    }
    cout << vowels << endl;
    cout << consonants << endl;
    cout << spaces << endl;
    cout << digits << endl;
}