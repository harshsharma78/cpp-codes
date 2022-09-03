#include <iostream>
using namespace std;
int main()
{
    int arr1[2][2], arr2[2][2], arr[2][2], rows, cols, r2, c2;
    cout << "Enter rows of first matrix" << endl;
    cin >> rows;
    cout << "Enter columns of first matrix" << endl;
    cin >> cols;
    cout << "Enter rows of second matrix" << endl;
    cin >> r2;
    cout << "Enter columns of second matrix" << endl;
    cin >> c2;
    if(rows!=c2 && r2!=cols){
        cout<<"Enter the values again";
        exit(0);
    }

    cout << "The values of first matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "The value of Matrix[" << i + 1 << "]"
                 << "[" << j + 1 << "] "; //<< arr1[i][j] << endl;
            cin >> arr1[i][j];
        }
    }
    cout << "The values of second matrix" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "The value of Matrix[" << i + 1 << "]"
                 << "[" << j + 1 << "] "; //<< arr2[i][j] << endl;
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                arr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "The product is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout <<  "The value of Matrix[" << i + 1 << "]" << "[" << j + 1 << "]" <<arr[i][j] << " ";
            cout << endl;
        }
    }
}