#include <bits/stdc++.h>
using namespace std;

// class smartphone
// {
//     int model_number;
// };

// int main()
// {
//     smartphone iphone;
//     cout << iphone.model_number;
//     // **data member are declared by default  as private in C++, so we can't access without public
// }
// **********************************************************************

class Student
{
public:
    char name;
    int rollNo;
    Student()
    {
        cout << "default constructor" << endl;
    }
    Student(char c, int num)
    {
        cout << "Paramaterized Constructor" << endl;
        rollNo = num;
        name = c;
    }

    void print()
    {
        cout << name << " " << rollNo;
    }
};

int main()
{
    // !calling the default constructor using object of
    // Student s;
    //  s.name = 'A';
    // s.rollNo = 15;
    // !calling the parameterized constructor using object of class
    Student s('B', 6);

       s.print();
}