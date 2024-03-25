#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    int health;
    int level;

    Hero()
    {
        cout << "Default Constructor Called" << endl;
    }
    Hero(Hero &temp)
    {
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main()
{
    Hero Ramesh;
    Ramesh.health = 100;
    Ramesh.level = 5;
    // !Copy constructor called here
    Hero Arjun(Ramesh);
    Arjun.health = 50;
    Arjun.level = 487;
    cout << Arjun.health << endl;
    cout << Arjun.level << endl;
    cout << Ramesh.health << endl;
    cout << Ramesh.level << endl;
    return 0;
}