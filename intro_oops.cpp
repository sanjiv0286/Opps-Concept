#include <bits/stdc++.h>
#include "hero.cpp" // **********(3)************
using namespace std;

int main()
{

    // *******(1)*********
    // Hero h1;
    // cout << "size " << sizeof(h1) << "\n";

    // *******(2)*********
    // Hero h1;
    // cout<<"size "<<sizeof(h1)<<"\n";

    // *************(4) : how to access properties **********
    // Hero ramesh;
    // cout << "health is" << ramesh.health << "\n"; // default privately declared
    // cout << "level is" << ramesh.level << "\n";   // default privately declared

    // *************(5)**********
    // Hero ramesh;
    // cout << "health is :" << ramesh.health << "\n"; // default privately declared
    // cout << "level is :" << ramesh.level << "\n";   // default privately declared

    // *************(6)**********
    // Hero ramesh;
    // cout << "health is :" << ramesh.health << "\n"; // this is publically  declared
    // cout << "level is :" << ramesh.level << "\n";   // this  privately declared error

    // *************(7)**********
    // Hero ramesh;
    // ramesh.health = 70;
    // ramesh.level= 'A';
    // cout<<"health is :"<<ramesh.health<<"\n"; // this is publically  declared
    // cout<<"level is :"<<ramesh.level<<"\n";  // this  privately declared error

    // *******************(8)***********
    Hero ramesh;
    cout<<"health is :"<<ramesh.health<<"\n";
    cout<<"level is :"<<ramesh.level<<"\n";

    // // ******(8)***********
    //  Hero ramesh;
    //  ramesh.setHealth(70);
    //  ramesh.setLevel('A');
    // cout<<"health is :"<<ramesh.getHealth()<<"\n";
    //// cout<<"health is :"<<ramesh.setHealth<<"\n"; // Wrong
    // cout<<"level is :"<<ramesh.getLevel()<<"\n";
    // cout<<"level is :"<<ramesh.level<<"\n";

    return 0;
}