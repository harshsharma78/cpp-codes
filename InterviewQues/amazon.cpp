#include <iostream>
#include <vector>
using namespace std;

int maxEle(vector<int> ele)
{
    int maxE = ele[0];
    for (int i = 0; i < ele.size(); i++)
    {
        if (ele[i] > maxE)
            maxE = ele[i];
    }
    return maxE;
}
int main()
{

    vector<int> locations = {1, 7, 6, 8};
    vector<int> movedFrom = {1, 7, 2};
    vector<int> movedTo = {2, 9, 5};

    int maxLoc = maxEle(locations);
    int maxFrom = maxEle(movedFrom);
    int maxTo = maxEle(movedTo);

    int size = max(maxLoc, max(maxFrom, maxTo));
    vector<int> ansLoc(size, -1);

    for (int i = 0; i < locations.size(); i++)
    {
        ansLoc[(locations[i])] = 1;
    }
    for (int i = 0; i < movedFrom.size(); i++)
    {
        ansLoc[movedFrom[i]] = 0;
        ansLoc[movedTo[i]] = 1;
    }

    for (int i = 1; i <= size; i++)
    {
        if (ansLoc[i] == 1)
            cout << i << endl;
    }
}