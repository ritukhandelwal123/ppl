#include <iostream>
using namespace std;
class student
{
protected:
    int roll;
    char name[20], branch[10];

public:
    void getdata()
    {
        cout << "Enter roll:";
        cin >> roll;
        cout << "Enter name:";
        cin >> name;
    }
    void putdata()
    {
        cout << "roll=" << roll;
        cout << "name is " << name;
    }
};
class calc : public student
{
protected:
    int s1, s2, s3, tot = 0;
    float perc;

public:
    void marks()
    {
        cout << "Enter marks of subject1 subject2 and subject3:";
        cin >> s1 >> s2 >> s3;
        tot = s1 + s2 + s3;
        perc = tot / 3;
    }
    void display()
    {
        cout << s1;
        cout << s2;
        cout << s3;
        cout << perc;
    }
};

int main()
{
    calc obj;
    obj.getdata();
    obj.putdata();
    obj.marks();
    obj.display();
}