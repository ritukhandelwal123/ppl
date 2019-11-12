#include <iostream>
using namespace std;
class employee
{
public:
    int empid, salary;
    char name[20], dept[20];
    void getdata()
    {
        cout << "Enter employee id:";
        cin >> empid;
        cout << "enter name:";
        cin >> name;
        cout << "enter salary:";
        cin >> salary;
        cout << "enter department:";
        cin >> dept;
    }
    void putdata()
    {
        cout << "employee id=" << empid;
        cout << "name is " << name;
        cout << "salary is " << salary;
        cout << "department is " << dept;
    }
};

int main()
{
    employee e[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        e[i].getdata();
    }
    for (i = 0; i < 5; i++)
    {
        e[i].putdata();
    }
}