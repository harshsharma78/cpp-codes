#include <iostream>
using namespace std;
int main()
{
    int arr1[2][2], arr2[2][2], arr[2][2], rows, cols;
    cout << "Enter the value of rows" << endl;
    cin >> rows;
    cout << "Enter number of columns" << endl;
    cin >> cols;
    cout << "The values of first matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "The values of second matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "The values of Matrix[" << i + 1 << "]"
                 << "[" << j + 1 << "] " << arr1[i][j] << endl;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "The values of Matrix[" << i + 1 << "]"
                 << "[" << j + 1
                 << "] " << arr2[i][j] << endl;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    cout << "The sum is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
            cout << endl;
        }
    }
}