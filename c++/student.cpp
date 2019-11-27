#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    int sem;
    char name[20];

public:
    void getdata()
    {
        cout << "\nEnter roll=";
        cin >> roll;
        cout << "\nEnter sem=";
        cin >> sem;
        cout << "\nEnter name=";
        cin >> name;
    }
    void putdata()
    {
        cout << "\nroll=" << roll;
        cout << "\nsem=" << sem;
        cout << "\nname=" << name;
    }
};
int main()
{
    student obj;
    obj.getdata();
    obj.putdata();
    return 0;
}