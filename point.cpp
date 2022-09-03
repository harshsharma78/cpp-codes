#include <iostream>
#include <math.h>
using namespace std;
//sqrt{(x2-x1)^2+(y2-y1)^2}
//friend void y(x,y)

class point

{
     int x, y;
    friend void pt(point, point);

public:
    //friend int pt(point, point);
    void coord(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void get()
    {
        cout << x << "," << y << endl;
    }
};
void pt(point o1, point o2)
{
    int a, b;
    a = pow(o2.x - o1.x, 2);
    b = pow(o2.y - o1.y, 2);
    cout<<sqrt(a + b);
    // cout<<dist<<endl;
}
int main()
{

    point p1, p2;
    p1.coord(4, 5);
    p1.get();

    p2.coord(3, 2);
    p2.get();

    pt(p1, p2);
}