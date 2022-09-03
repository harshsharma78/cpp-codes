#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char str[10],vowels=0;
    cout<<"Enter any string ";
    cin.getline(str,10);
      for (int i = 0; str[i] != '\0'; i++)
    {
     if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')
         || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
        {
            vowels++;
        }
}
       cout<<"The number Vowels in a String are"<<(int)vowels<<endl<<str<<endl;
}