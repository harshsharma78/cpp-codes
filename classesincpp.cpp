#include <iostream>
using namespace std;
class employee
{
  // static 
   int id;
    char tag;

public:
    void setdata(void)//(int id1, char tag1)
    {
        cout << "Enter the value of id " << endl;
     cin >> id;
        cout << "Enter the tag of the employee " << endl;
        cin >> tag;
        // id = id1;
        // tag = tag1;
    }
    void getdata()
    {
        cout << "The id of the employee is " << id << endl;
        cout << "The tag of the employee is " << tag<<endl;
    }
};
//int employee:: id;
int main()
{
    employee rohan,akash,jashan;
    rohan.setdata();
    rohan.getdata();
    akash.setdata();
    akash.getdata();
    jashan.setdata();
    jashan.getdata();
}