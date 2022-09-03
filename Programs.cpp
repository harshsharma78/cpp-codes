// 1. Program of Factorial
/*   int number, i, fact = 1;
    cout << "Enter any number" << endl;
    cin >> number;
    for (i = 1; i <= number; i++)
    {
        fact *= i;
    }
    cout << "The Factorial of a number is " << fact << endl;
}
* /

 /*   2. Fibbonacci Series int i,
    a = 0, b = 1, fib, n;
cout << "Enter the number " << endl;
cin >> n;
cout << "The series is given as " << endl;
for (i = 1; i <= n; i++)
{
    cout << a << endl;
    fib = a + b;
    a = b;
    b = fib;
    //cout<<"The series is given as "<<a<<endl;
}
* /

  /*  3. Pattern int i,
    j, rows, cols;
cout << "Enter the values of Rows" << endl;
cin >> rows;
for (i = 0; i < rows; i++)
{
    for (j = 0; j <= i; j++)
    {
        cout << "*";
    }
    cout << "\n";
}
* /
   /* 5. Pattern int i,
    j, rows, cols;
cout << "Enter the values of Rows" << endl;
cin >> rows;
for (i = 1; i <= rows; i++)
{
    for (j = 1; j <= i; j++)
    {
        cout << " " << j;
    }
    cout << "\n";
}*/

/* 4. Pattern
    int i,
    j, rows, cols;
cout << "Enter the values of " << endl;
cin >> rows;
for (i = 1; i <= rows; i++)
{
    for (j = 5; j >= i; j--)
    {
        cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
        cout << "* ";
    }
    cout << "\n";
}*/

// 6.Table of any Number
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // int i, n, table, k;
    // cout << "Enter the value upto which you want to print a Table" << endl;
    // cin >> k;
    // cout << "Enter the number you want a table of " << endl;
    // cin >> n;
    // for (i = 1; i <= k; i++)
    // {
    //     table = n * i;
    //     cout << n << "*" << i << "="
    //          << table << endl;
    // }
    char ch[100];
    int i = 0, count = 0;

    gets(ch);
    while (i != strlen(ch))
    {
        count++;
        i++;
    }
    printf("The String is %s with %d words in it", ch, count);
}