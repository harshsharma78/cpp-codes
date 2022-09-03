// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // unordered_map<int, int> u;
//     // unordered_set<int> s;
//     // // int arr[] = {1, 2};
//     // int arr[] = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
//     // int n = 10;

//     // for (int i = 0; i < n; i++)
//     //     u[arr[i]]++;

//     // for (auto i : u)
//     // {
//     //     s.insert(i.second);
//     // }
//     // if (u.size() == s.size())
//     // {
//     //     cout << true;
//     // }
//     // else
//     // {
//     //     cout << false;
//     // }
//     // int a[] = {2, 2, 3};
//     int a[] = {2, 1, 2};
//     // int a[] = {3, 2, 3, 2, 2};
//     int n = 3;
//     stack<int> s;
//     vector<int> result;

//     for (int i = 0; i < n; i++)
//     {
//         if (s.empty())
//         {
//             s.push(a[i]);
//             result.push_back(s.size());
//         }
//         else if (s.top() == a[i])
//         {
//             s.pop();
//             result.push_back(s.size());
//         }
//         else
//         {
//             s.push(a[i]);
//             result.push_back(s.size());
//         }
//     }
//     for (int i = 0; i < result.size(); i++)
//         cout << result[i] << endl;
// }

// Infosys Question
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Taking inputs
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   

    if (n == 1 && a[0] == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }

    vector<int> count(n, 0);
    count[0] = 1;
    int prev_index = 0;
    int total_balls = 1;

    for (int i = 1; i < n; i++)
    {
        total_balls = total_balls + 1;

        if (a[prev_index] == a[i])
        {
            count[i] = count[prev_index] + 1;
        }
        else
        {
            count[i] = 1;
        }

        if (count[i] == a[i])
        {
            total_balls = total_balls - count[i];
            count[i] = 0;
        }

        cout << total_balls << " ";
        prev_index = total_balls - 1;
        cout << "prev index = " << prev_index << " ";
        cout << "\n";
    }

    return 0;
}