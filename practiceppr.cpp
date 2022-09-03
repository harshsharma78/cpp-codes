#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void linearsearch(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << i << "-->" << arr[i] << endl;
            break;
        }
    }
    cout << "Element Not Found" << endl;
}
void uppercase(char name[])
{
    char ch;
    for (int i = 0; i < strlen(name); i++)
    {
        ch = (name[i] - 32);
        cout << ch;
    }
}
void binarysearch(int arr[], int n, int ele)
{
    int left = 0, right = n;
    while (right > left)
    {
        for (int i = 0; i < n; i++)
        {
            int mid = (left + right) / 2;

            if (arr[mid] == ele)
            {
                cout << "The Element is " << arr[mid] << " at index " << mid << endl;
                break;
            }
            if (arr[mid] > ele)

                right = mid - 1;

            else
                left = mid + 1;
        }
    }
}
int main()
{
    int arr[] = {1, 6, 9, 12, 34};

    // char name[10];
    // cin.getline(name, 10);
    int size = sizeof(arr) / sizeof(arr[0]);

    // linearsearch(arr, size, 8328);
    // uppercase(name);
    binarysearch(arr, size, 12);
}