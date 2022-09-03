#include <iostream >
#include <cstring>
using namespace std;

int main()
{
    char str[20], str1[20], i = 0;

    cin.getline(str, 20);

    cin.getline(str1, 20);

    if (strcmp(str, str1) == 0)
    {
        cout << str << "=" << str1 << endl;
    }
    else
    {
        cout << str << "!=" << str1 << endl;
        ;
    }
}