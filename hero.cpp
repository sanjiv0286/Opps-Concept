
#include <bits/stdc++.h>
class Hero
{
public:
    // *****(1)******
    // propeties
    // char level;
    // char name[100];
    // int health;

    // *****(2)******
    // empty class
};

// =========================================================

class Hero
{
    // *****(1)******
    // propeties
    // char level;
    // char name[100];
    // int health;
    // tino ka total size 108 but hona 105
    // only char, int ka 8 but 5 hona

    // *****(2)******
    // empty class

    //***********(4)*****
    // int health;
    // char level;

    // ****(5)******
    // public :    // garbage value lelega agar koi value nhi diya hai to
    // int health;
    // char level;

    //  ****(6)******
    // public: // garbage value lelega agar koi value nhi diya hai to
    //     int health;

    // private:
    //     char level;
    //     void print()
    //     {
    //         cout << level << "\n";
    //     }

    // *********(7)************
    // public :    // garbage value lelega agar koi value nhi diya hai to
    // int health;
    // char level;

    // ****(8)******
private:
    int health;

public:
    char level;
    void print()
    {
        cout << level << "\n";
    }
    //  ******** Getter and setters in oops *********************
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        // void setHealth(int h, char name)
        // {
        // if (name == 'A') //--- don't understand properely
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};