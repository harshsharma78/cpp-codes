// cin >> radians;
// radians = degrees * 180 / pi;
// degrees = (radians *pi)* (pi / 180);
#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void setdata()
    {
        cout << "Enter the values of a and b:" << endl;
        cin >> a >> b;
    }
    void arithmetic()
    {
        cout << "The Addition is:" << a + b << endl
             << "The Subtracton is:" << a - b << endl
             << "The Multiplication is:" << a * b << endl
             << "The Division is:" << a / b << endl;
    }
};
class scientificcalculator
{
    int radians,  pi = 3.14;
    int degrees;
    double angle;
public:
    void setitems()
    {
        cout << "Enter the value of angle:" << endl;
        cin >> angle;
    }
    void trigonometric()
    {
        cout << "The values in Radians" << endl;
        cout << "The value of cos(" << angle << ")"
             << " is:" << cos(angle) << endl
             << "The value of tan(" << angle << ")"
             << " is:" << tan(angle) << endl
             << "The value of log(" << angle << ")"
             << " is:" << log(angle) << endl
             << "The value of sin(" << angle << ")"
             << " is:" << sin(angle) << endl;
    }
};
class Hybridcalculator : public simplecalculator, public scientificcalculator
{
};
int main()
{
    Hybridcalculator calc;
    // calc.setdata();
    // calc.arithmetic();
    calc.setitems();
    calc.trigonometric();
}